#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "block.h"

typedef struct Blockchain {
    Block *blocks;
    int size;
} Blockchain;

Blockchain create_blockchain();
void add_block(Blockchain *blockchain, const char *data);
void print_blockchain(const Blockchain *blockchain);

#endif // BLOCKCHAIN_H
