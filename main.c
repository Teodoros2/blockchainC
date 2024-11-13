#include <stdio.h>
#include "blockchain.h"

int main() {
    Blockchain blockchain = create_blockchain();
    
    add_block(&blockchain, "First block after Genesis");
    add_block(&blockchain, "Second block after Genesis");
    
   
    // Print the entire blockchain
    print_blockchain(&blockchain);

    // Free allocated memory
    free(blockchain.blocks);

    return 0;
}
