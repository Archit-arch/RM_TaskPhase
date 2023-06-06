#include <iostream>

int sumOfProperDivisors(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}

bool areAmicableNumbers(int number1, int number2) {
    int sum1 = sumOfProperDivisors(number1);
    int sum2 = sumOfProperDivisors(number2);
    return (sum1 == number2) && (sum2 == number1);
}

int main() {
    int number1, number2;
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    if (areAmicableNumbers(number1, number2)) {
        std::cout << number1 << " and " << number2 << " are Amicable numbers." << std::endl;
    } else {
        std::cout << number1 << " and " << number2 << " are not Amicable numbers." << std::endl;
    }

    return 0;