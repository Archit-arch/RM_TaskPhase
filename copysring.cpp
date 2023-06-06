void copyString(char* dest, const char* src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    const int MAX_SIZE = 100;
    char source[MAX_SIZE];
    char destination[MAX_SIZE];

    std::cout << "Enter a string: ";
    std::cin.getline(source, MAX_SIZE);

    // Copying the string using pointers
    copyString(destination, source);

    std::cout << "Copied string: " << destination << std::endl;

    return 0;
}