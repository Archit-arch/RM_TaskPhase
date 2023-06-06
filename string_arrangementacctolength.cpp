#include <iostream>
#include <vector>
#include <algorithm>

// Function to rearrange strings in ascending order based on their lengths
void rearrangeStrings(std::vector<std::string>& strings) {
    std::sort(strings.begin(), strings.end(), [](const std::string& a, const std::string& b) {
        return a.length() < b.length();
    });

    for (std::string& str : strings) {
        std::sort(str.begin(), str.end());
    }
}

int main() {
    // Example 2D character array
    std::vector<std::string> strings = {
        "word",
        "number",
        "cat"
     };

    std::cout << "Before rearrangement:" << std::endl;
    for (const std::string& str : strings) {
        std::cout << str << std::endl;
    }

    // Rearrange the strings based on their lengths and sort each individual string
    rearrangeStrings(strings);

    std::cout << "After rearrangement:" << std::endl;
    for (const std::string& str : strings) {
        std::cout << str << std::endl;
    }

    return 0;
}