#include <iostream>
#include <string>

int main() {
    std::string userInput;

    std::cout << "Please enter input" << std::endl;

    std::getline(std::cin, userInput);

    std::cout << "User input: " << userInput << std::endl;

    return 0;
}