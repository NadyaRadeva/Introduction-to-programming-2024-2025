#ifndef EXERCISE14
#define EXERCISE14

#include<iostream>

inline int** createMatrix14(int rows, int cols) {
	int** matrix = new int* [rows];

	for (size_t i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}

	return matrix;
}

inline void initialiseMatrix14(int** matrix, int rows, int cols) {
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

inline void printMatrix14(int** matrix, int rows, int cols) {
	std::cout << "Matrix: " << std::endl;

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

inline void deleteMatrix14(int** matrix, int rows, int cols) {
	for (size_t i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

inline bool isSymmetricSecondaryDiagonal(int** matrix, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (matrix[i][j] != matrix[size - 1 - j][size - 1 - i]) {
				return false;
			}
		}
	}
	return true;
}

#endif // !EXERCISE14
