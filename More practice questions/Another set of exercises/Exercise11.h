#ifndef EXERCISE11
#define EXERCISE11

#include<iostream>

inline int** createMatrix11(int rows, int cols) {
	int** matrix = new int* [rows];

	for (size_t i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}

	return matrix;
}

inline void initialiseMatrix11(int** matrix, int rows, int cols) {
	std::cout << "Enter elements in matrix: ";

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin || matrix[i][j] < 0) {
				std::cerr << "Invalid input!" << std::endl;
				return;
			}
		}
	}
}

inline void printMatrix11(int** matrix, int rows, int cols) {
	std::cout << "Matrix: " << std::endl;

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

inline void deleteMatrix11(int** matrix, int rows, int cols) {
	for (size_t i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

bool isMatrixSymmetrical(int** matrix, int rows, int cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = i + 1; j < cols; ++j) {
			if (matrix[i][j] != matrix[j][i]) {
				return false;
			}
		}
	}

	return true;
}

#endif // !EXERCISE11
