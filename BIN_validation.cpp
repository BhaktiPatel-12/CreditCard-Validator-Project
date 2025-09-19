#include <iostream>
#include <string>
#include <unordered_set>

// Function to check if the BIN is valid
bool isValidBIN(const std::string& bin, const std::unordered_set<std::string>& validBins) {
    if (bin.length() != 6) {
        return false; // BIN must be 6 digits long
    }

    for (char c : bin) {
        if (!std::isdigit(c)) {
            return false; // All characters must be digits
        }
    }

    // Check if the BIN is in the set of valid BINs
    return validBins.find(bin) != validBins.end();
}

int main() {
    std::unordered_set<std::string> validBins = {
        "123456", "654321", "111111", "222222" // Add more valid BINs as needed
    };

    std::string cardNumber;
    std::cout << "Enter credit card number: ";
    std::cin >> cardNumber;

    // Extract BIN (first 6 digits)
    std::string bin = cardNumber.substr(0, 6);

    // Validate BIN
    if (isValidBIN(bin, validBins)) {
        std::cout << "Valid BIN." << std::endl;
    } else {
        std::cout << "Invalid BIN." << std::endl;
    }

    return 0;
}
