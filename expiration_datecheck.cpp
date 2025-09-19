#include <iostream>
#include <string>
#include <ctime>

bool isValidDate(const std::string& date) {
    if (date.length() != 5 || date[2] != '/') {
        return false;
    }

    // Extract month and year
    int month = std::stoi(date.substr(0, 2));
    int year = std::stoi(date.substr(3, 2));

    // Check if month is valid
    if (month < 1 || month > 12) {
        return false;
    }

    // Get current date
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    int currentYear = (now->tm_year % 100); // Get last two digits of year
    int currentMonth = (now->tm_mon + 1);

    // Check if the date has not passed
    if (year > currentYear || (year == currentYear && month >= currentMonth)) {
        return true;
    }
    return false;
}

int main() {
    std::string expiryDate;

    std::cout << "Enter expiration date (MM/YY): ";
    std::cin >> expiryDate;

    // Check if the expiration date is valid
    if (isValidDate(expiryDate)) {
        std::cout << "Expiration date is valid and has not passed." << std::endl;
    } else {
        std::cout << "Invalid or expired date." << std::endl;
    }

    return 0;
}
