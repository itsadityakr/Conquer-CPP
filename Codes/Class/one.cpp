#include <iostream>

void multiplyArrays(int** arr1, int** arr2, int** result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void displayArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    std::cout << "Enter the number of rows and columns for the first matrix: ";
    std::cin >> rows1 >> cols1;

    std::cout << "Enter the number of rows and columns for the second matrix: ";
    std::cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        std::cerr << "Matrix multiplication not possible. Number of columns of first matrix must be equal to the number of rows of the second matrix.";
        return 1;
    }

    int** array1 = new int*[rows1];
    int** array2 = new int*[rows2];
    int** result = new int*[rows1];

    for (int i = 0; i < rows1; ++i) {
        array1[i] = new int[cols1];
        result[i] = new int[cols2];
    }

    for (int i = 0; i < rows2; ++i) {
        array2[i] = new int[cols2];
    }

    // Input matrices
    std::cout << "Enter the elements of the first matrix: ";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            std::cin >> array1[i][j];
        }
    }

    std::cout << "Enter the elements of the second matrix: ";
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cin >> array2[i][j];
        }
    }

    // Matrix multiplication
    multiplyArrays(array1, array2, result, rows1, cols1, cols2);

    // Display result
    std::cout << "Resultant array after multiplication:\n";
    displayArray(result, rows1, cols2);

    // Free dynamically allocated memory
    for (int i = 0; i < rows1; ++i) {
        delete[] array1[i];
        delete[] result[i];
    }
    for (int i = 0; i < rows2; ++i) {
        delete[] array2[i];
    }
    delete[] array1;
    delete[] array2;
    delete[] result;

    return 0;
}
