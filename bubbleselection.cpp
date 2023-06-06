#include <iostream>
#include <vector>


using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr;
    int num, target;
    char method;

    cout << "Enter the array elements (space-separated): ";
    while (cin >> num) {
        arr.push_back(num);
    }

    cout << "Enter the number to search for: ";
    cin >> target;

    cout << "Enter 's' for Selection Sort or 'b' for Bubble Sort: ";
    cin >> method;

    if (method == 's') {
        selectionSort(arr);
    }
    else if (method == 'b') {
        bubbleSort(arr);
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    int position = binarySearch(arr, target);

    if (position != -1) {
        cout << "The number " << target << " is found at position " << position << "." << endl;
    }
    else {
        cout << "The number is not found in the array." << endl;
    }

    return 0;
}
