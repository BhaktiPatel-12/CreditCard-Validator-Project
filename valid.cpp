#include <iostream>
using namespace std;

void invalid();

int main() {
    long a;
    cout << "Type: ";
    cin >> a;

    int check_sum = 0;
    bool is_second = false;

    while (a > 0) {
        int digit = a % 10;
        a /= 10;

        if (is_second) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        check_sum += digit;
        is_second = !is_second;
    }

    if (check_sum % 10 == 0) {
        cout << "VALID" << endl;
    } else {
        invalid();
    }

    return 0;
}

void invalid() {
    cout << "INVALID" << endl;
}
