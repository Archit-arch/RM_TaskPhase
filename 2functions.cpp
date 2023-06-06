#include <iostream>
#include <vector>

// Function to perform matrix multiplication
std::vector<std::vector<int>> matrixMultiplication(const std::vector<std::vector<int>>& matrixA, const std::vector<std::vector<int>>& matrixB) {
    int rowsA = matrixA.size();
    int colsA = matrixA[0].size();
    int colsB = matrixB[0].size();

    std::vector<std::vector<int>> result(rowsA, std::vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    return result;
}

// Function to find the transpose of a matrix
std::vector<std::vector<int>> matrixTranspose(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    std::vector<std::vector<int>> transpose(cols, std::vector<int>(rows, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
}

int main() {
    // Test case: Identity verification (A.B)' = B'.A'

    // A
    std::vector<std::vector<int>> matrixA = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    //B
    std::vector<std::vector<int>> matrixB = {
        {7, 8, 9},
        {10, 11, 12}
    };

    
    std::vector<std::vector<int>> result1 = matrixTranspose(matrixMultiplication(matrixA, matrixB));

    
    std::vector<std::vector<int>> transposeB = matrixTranspose(matrixB);

    
    std::vector<std::vector<int>> transposeA = matrixTranspose(matrixA);

    
    std::vector<std::vector<int>> result2 = matrixMultiplication(transposeB, transposeA);

    
    if (result1 == result2) {
        std::cout << "(A.B)' = B'.A' Identity is verified." << std::endl;
    }
    else {
        std::cout << "(A.B)' = B'.A' Identity is NOT verified." << std::endl;
    }

    return 0;
}