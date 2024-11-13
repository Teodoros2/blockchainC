#include <stdio.h>
#include <stdlib.h>
#include "blockchain.h"

Blockchain create_blockchain() {
    Blockchain blockchain;
    blockchain.size = 0;
    blockchain.blocks = malloc(sizeof(Block) * 100); // Allocate space for 100 blocks
    blockchain.blocks[0] = create_block(0, "0", "Genesis Block");
    blockchain.size++;
    return blockchain;
}

void add_block(Blockchain *blockchain, const char *data) {
    Block new_block = create_block(blockchain->size, blockchain->blocks[blockchain->size - 1].hash, data);
    blockchain->blocks[blockchain->size] = new_block;
    blockchain->size++;
}

void print_blockchain(const Blockchain *blockchain) {
    for (int i = 0; i < blockchain->size; i++) {
        print_block(&blockchain->blocks[i]);
    }
}
