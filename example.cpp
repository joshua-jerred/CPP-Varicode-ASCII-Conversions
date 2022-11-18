#include <iostream>
#include <assert.h>

#include "varicode.h"


int main() {
    std::cout << ascii_to_varicode[10] << std::endl; // Prints "11101"
    std::cout << ascii_to_varicode['!'] << std::endl; // Prints "111111111"
    
    std::cout << varicode_to_ascii["111111111"] << std::endl; // Prints "!"
    std::cout << varicode_to_ascii["1111101"] << std::endl; // Prints "A"

    std::cout << varicode_to_ascii[ 
        ascii_to_varicode['Z']
       ]
        << std::endl; // Prints "Z"
    
    for (int i = 0; i < 128; i++) { // Quick assertion to make sure that the
                                    // map and table are consistent.
        assert(varicode_to_ascii[ascii_to_varicode[i]] == i);
    }
    std::cout << "All assertions passed!" << std::endl;
    
    return 0;
}