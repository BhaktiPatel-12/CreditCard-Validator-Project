# CreditCard-Validator-Project
A simple C++ program to validate credit card numbers using the Luhn Algorithm

**Description**

A simple C++ program to validate credit card numbers using the Luhn Algorithm. The project checks whether a given credit card number is valid based on the checksum logic widely used by major card providers(visa,ATM card,etc).
This project is ideal for beginners learning C++ and interested in basic algorithms, input validation, and number handling.

**Features**

-Input and validate credit card numbers
-Implementation of the Luhn algorithm
-Basic error handling for invalid inputs
-Simple command-line interface

**Algorithm Used -> Luhn Algorithm:**

-From the rightmost digit, double every second digit.
-If the result is greater than 9, subtract 9.
-Sum all the digits.
-If the total modulo 10 is 0, the card is valid.

