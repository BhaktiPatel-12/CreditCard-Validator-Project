#include <iostream>
#include <string>

bool isValidLength(const std::string& cardNumber) {
    // Check if the length is 13, 15, or 16
    int length = cardNumber.length();
    return (length == 13 || length == 15 || length == 16);
}

int main() {
    std::string cardNumber;
    
    std::cout << "Enter credit card number: ";
    std::cin >> cardNumber;

    // Check if the entered credit card number is a valid length
    if (isValidLength(cardNumber)) {
        std::cout << "Valid length." << std::endl;
    } else {
        std::cout << "Invalid length." << std::endl;
    }

    return 0;
}
