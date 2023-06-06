#include <iostream>

int findGCD(int a, int b) {
    
    if (b == 0) {
        return a;
    }

    
    return findGCD(b, a % b);
}

int main() {
    int a, b;
    std::cout << "Enter two positive integers: ";
    std::cin >> a >> b;

    if (a <= 0 || b <= 0) {
        std::cout << "Invalid input. Please enter positive integers." << std::endl;
    } else {
        int gcd = findGCD(a, b);
        std::cout << "The GCD of " << a << " and " << b << " is: " << gcd << std::endl;
    }

    return 0;
}