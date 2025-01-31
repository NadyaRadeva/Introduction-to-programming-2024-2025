#ifndef EXERCISE8
#define EXERCISE8

#include<iostream>

const int MIN_ROWS8 = 1;
const int MAX_ROWS8 = 10;
const int MIN_COLS8 = 1;
const int MAX_COLS8 = 10;
const int MIN_EL_VALUE8 = 0;
const int MAX_EL_VALUE8 = 9;

inline int** initialiseMatrix8(int rows, int cols) {
	if (rows < MIN_ROWS8 || rows > MAX_COLS8 || cols < MIN_COLS8 || cols > MAX_COLS8) {
		std::cerr << "Invalid sizes!" << std::endl;
		return nullptr;
	}

	int** matrix = new int* [rows];

	for (size_t i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}

	return matrix;
}

inline void inputElsInMatrix8(int** matrix, int rows, int cols) {
	std::cout << "Enter lines in matrix: " << std::endl;

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin || matrix[i][j] < MIN_EL_VALUE8 || matrix[i][j] > MAX_EL_VALUE8) {
				std::cerr << "Invalid input!" << std::endl;
				return;
			}
		}
	}
}

inline void printElsInMatrix8(int** matrix, int rows, int cols) {
	std::cout << "Matrix:" << std::endl;

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}
}

inline void deleteMatrix8(int** matrix, int rows, int cols) {
	for (size_t i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

inline void findColumnNumbers(int** matrix, int n, int m) {
	for (int j = 0; j < m; ++j) {
		int number = 0;
		for (int i = n - 1; i >= 0; --i) {
			number = number * 10 + matrix[i][j];
		}
		std::cout << number << " ";
	}
	std::cout << std::endl;
}


#endif // !EXERCISE8
