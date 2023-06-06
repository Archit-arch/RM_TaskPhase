#include <iostream>


void bubbleSortRecursive(int arr[], int n) {
    if (n == 1) {
        return; 
    }

    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            
            std::swap(arr[i], arr[i + 1]);
        }
    }

    
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    
    bubbleSortRecursive(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

