// Simple program that greets the user
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";  // Prompt for user input
    std::cin >> name;                  // Read user input
    std::cout << "Hello world from " << name << std::endl;  // Output greeting
    return 0;
}
