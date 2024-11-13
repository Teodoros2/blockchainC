#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>
#include "utils.h"

char* calculate_hash(const Block *block) {
    static char hash[64];
    unsigned char digest[SHA256_DIGEST_LENGTH];
    char input[512];

    snprintf(input, sizeof(input), "%d%ld%s%s", block->index, block->timestamp, block->previous_hash, block->data);
    SHA256((unsigned char*)input, strlen(input), digest);

    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        sprintf(&hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return hash;
}
