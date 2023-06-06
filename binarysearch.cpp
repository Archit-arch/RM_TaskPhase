#include <iostream>


int binarySearchRecursive(int arr[], int target, int left, int right) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2; 

    if (arr[mid] == target) {
        return mid; // Base case: element found at mid index
    } else if (arr[mid] > target) {
        return binarySearchRecursive(arr, target, left, mid - 1); // Recursively search the left half
    } else {
        return binarySearchRecursive(arr, target, mid + 1, right); // Recursively search the right half
    }
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the elements of the array in sorted order:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Enter the element to search for: ";
    std::cin >> target;

    int index = binarySearchRecursive(arr, target, 0, size - 1);

    if (index != -1) {
        std::cout << "Element found at index " << index << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
13.	Find the factorial of a number using recursion. 
#include <iostream>


int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    }

    return n * factorialRecursive(n - 1); // Recursive call to find factorial
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    } else {
        int factorial = factorialRecursive(n);
        std::cout << "Factorial of " << n << " is: " << factorial << std::endl;
    }

    return 0;
}
