#include <iostream>

bool isHillNumber(int number) {
    bool ascending = true;
    bool descending = false;
    int lastDigit = number % 10;
    number /= 10;

    while (number > 0) {
        int currentDigit = number % 10;
        number /= 10;

        if (ascending) {
            if (currentDigit >= lastDigit) {
                ascending = false;
                descending = true;
            } else {
                return false;
            }
        } else if (descending) {
            if (currentDigit <= lastDigit) {
                return false;
            }
        }

        lastDigit = currentDigit;
    }

    return descending;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isHillNumber(number)) {
        std::cout << number << " is a Hill Number." << std::endl;
    } else {
        std::cout << number << " is not a Hill Number." << std::endl;
    }

    return 0;
}