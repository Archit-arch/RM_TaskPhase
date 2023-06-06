#include <iostream>
using namespace std;

const int MAX = 10;

void replaceWithZeroes(int matrix[MAX][MAX], int rows, int cols) {
    bool rowZeroes[MAX] = {false};
    bool colZeroes[MAX] = {false};

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowZeroes[i] = true;
                colZeroes[j] = true;
            }
        }
    }

   
    for (int i = 0; i < rows; i++) {
        if (rowZeroes[i]) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

   
    for (int j = 0; j < cols; j++) {
        if (colZeroes[j]) {
            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[MAX][MAX];
    int rows, cols;

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    replaceWithZeroes(matrix, rows, cols);

    cout << "Matrix after replacing rows and columns with zeroes:" << endl;
    displayMatrix(matrix, rows, cols);

    return 0;
}
