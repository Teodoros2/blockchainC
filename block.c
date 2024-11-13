#include <stdio.h>
#include <string.h>
#include "block.h"
#include "utils.h"

Block create_block(int index, const char *previous_hash, const char *data) {
    Block block;
    block.index = index;
    block.timestamp = time(NULL);
    strcpy(block.previous_hash, previous_hash);
    strcpy(block.data, data);
    strcpy(block.hash, calculate_hash(&block)); // Assume calculate_hash is defined in utils.c
    return block;
}

void print_block(const Block *block) {
    printf("Block #%d\n", block->index);
    printf("Timestamp: %ld\n", block->timestamp);
    printf("Previous Hash: %s\n", block->previous_hash);
    printf("Hash: %s\n", block->hash);
    printf("Data: %s\n", block->data);
}
