#include <iostream>
#include "utils.h"

int main() {
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << "Hello, " << name << "!" << std::endl;
    
    // Call the utility function
    printMessage("This is an S2I-built C++ application.");
    
    return 0;
}
