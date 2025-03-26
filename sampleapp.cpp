#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  // Take input with spaces

    std::cout << "Hello, " << name << "! Welcome to C++ programming." << std::endl;

    return 0;
}
