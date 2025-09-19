#include <iostream>
#include <string>

std::string getIssuer(const std::string& cardNumber) {
    if (cardNumber.length() < 2) {
        return "Invalid";
    }

    if (cardNumber[0] == '4') {
        return "Visa";
    } else if (cardNumber.substr(0, 2) == "51" || cardNumber.substr(0, 2) == "52" ||
               cardNumber.substr(0, 2) == "53" || cardNumber.substr(0, 2) == "54" ||
               cardNumber.substr(0, 2) == "55") {
        return "MasterCard";
    } else if (cardNumber.substr(0, 2) == "34" || cardNumber.substr(0, 2) == "37") {
        return "American Express";
    } else if (cardNumber.substr(0, 4) == "6011" || cardNumber.substr(0, 2) == "65" ||
               (cardNumber.substr(0, 3) >= "644" && cardNumber.substr(0, 3) <= "649")) {
        return "Discover";
    } else if (cardNumber.substr(0, 4) == "3528" || cardNumber.substr(0, 4) == "3589" ||
               (cardNumber.substr(0, 4) >= "3528" && cardNumber.substr(0, 4) <= "3589")) {
        return "JCB";
    } else if (cardNumber.substr(0, 4) == "5018" || cardNumber.substr(0, 4) == "5020" ||
               cardNumber.substr(0, 4) == "5038" || cardNumber.substr(0, 4) == "5893" ||
               cardNumber.substr(0, 4) == "6304" || cardNumber.substr(0, 4) == "6759" ||
               cardNumber.substr(0, 4) == "6761" || cardNumber.substr(0, 4) == "6762" ||
               cardNumber.substr(0, 4) == "6763") {
        return "Maestro";
    }
    return "Unknown";
}

int main() {
    std::string cardNumber;

    std::cout << "Enter credit card number: ";
    std::cin >> cardNumber;

    // Get and display the card issuer
    std::string issuer = getIssuer(cardNumber);
    std::cout << "Issuer: " << issuer << std::endl;

    return 0;
}
