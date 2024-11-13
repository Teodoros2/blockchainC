#ifndef BLOCK_H
#define BLOCK_H

#include <time.h>

typedef struct Block {
    int index;
    time_t timestamp;
    char previous_hash[64];
    char hash[64];
    char data[256];
} Block;

Block create_block(int index, const char *previous_hash, const char *data);
void print_block(const Block *block);

#endif // BLOCK_H
