#include <iostream>
#include <string>
#include <cctype>

// Function to check if CVV/CVC is valid
bool isValidCVV(const std::string& cvv) {
    if (cvv.length() != 3 && cvv.length() != 4) {
        return false; // CVV should be 3 or 4 digits long
    }

    for (char c : cvv) {
        if (!std::isdigit(c)) {
            return false; // All characters must be digits
        }
    }

    return true;
}

int main() {
    std::string cvv;

    std::cout << "Enter CVV/CVC: ";
    std::cin >> cvv;

    // Validate CVV/CVC
    if (isValidCVV(cvv)) {
        std::cout << "CVV/CVC is valid." << std::endl;
    } else {
        std::cout << "Invalid CVV/CVC." << std::endl;
    }

    return 0;
}
