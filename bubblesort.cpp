#include <iostream>
#include <cstring>

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    char arr[MAX_SIZE];

    std::cout << "Enter a string: ";
    std::cin.getline(arr, MAX_SIZE);

    int length = strlen(arr);
    bubbleSort(arr, length);

    std::cout << "Sorted string: " << arr << std::endl;

    return 0;
}