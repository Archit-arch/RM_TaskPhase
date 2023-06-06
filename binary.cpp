#include <iostream>
#include <sstream>
#include <bitset>

std::string decimalToHexadecimal(int decimal) {
    std::stringstream ss;
    ss << std::hex << decimal;
    return ss.str();
}

std::string decimalToOctal(int decimal) {
    std::stringstream ss;
    ss << std::oct << decimal;
    return ss.str();
}

std::string decimalToBinary(int decimal) {
    std::bitset<32> binary(decimal);
    return binary.to_string();
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    std::string hexadecimal = decimalToHexadecimal(decimal);
    std::string octal = decimalToOctal(decimal);
    std::string binary = decimalToBinary(decimal);

    std::cout << "Hexadecimal: " << hexadecimal << std::endl;
    std::cout << "Octal: " << octal << std::endl;
    std::cout << "Binary: " << binary << std::endl;

    return 0;
}