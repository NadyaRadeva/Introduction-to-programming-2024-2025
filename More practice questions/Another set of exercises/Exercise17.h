#ifndef EXERCISE17

#include<iostream>

const int MIN_SIZE_MATRIX = 1;
const int MAX_SIZE_MATRIX = 20;

inline int** createMatrix17(int size);
inline void initialiseElsInMatrix17(int** matrix, int size);
inline void printMatrix17(int** matrix, int size);
inline void deleteMatrix17(int** matrix, int size);
inline bool isPerfectSquare(int** matrix, int size);

inline int** createMatrix17(int size) {
	if (size < MIN_SIZE_MATRIX || size > MAX_SIZE_MATRIX) {
		std::cerr << "Invalid size!" << std::endl;
		return nullptr;
	}
	
	int** matrix = new int* [size];

	for (size_t i = 0; i < size; ++i) {
		matrix[i] = new int[i];
	}

	return matrix;
}

inline void initialiseElsInMatrix17(int** matrix, int size) {
	std::cout << "Enter elements in matrix: ";
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin) {
				std::cerr << "Invalid input!" << std::endl;
				return;
			}
		}
	}
}

inline void printMatrix17(int** matrix, int size) {
	std::cout << "Matrix: " << std::endl;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

inline void deleteMatrix17(int** matrix, int size) {
	for (size_t i = 0; i < size; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

inline bool isPerfectSquare(int** matrix, int size) {
	int sum = 0;
	for (int j = 0; j < size; j++) {
		sum += matrix[0][j];
	}

	for (int i = 1; i < size; i++) {
		int rowSum = 0;
		for (int j = 0; j < size; j++) {
			rowSum += matrix[i][j];
		}
		if (rowSum != sum) {
			return false;
		}
	}

	for (int j = 0; j < size; j++) {
		int colSum = 0;
		for (int i = 0; i < size; i++) {
			colSum += matrix[i][j];
		}
		if (colSum != sum) {
			return false;
		}
	}

	int mainDiagonal = 0, secondaryDiagonal = 0;
	for (int i = 0; i < size; i++) {
		mainDiagonal += matrix[i][i];
		secondaryDiagonal += matrix[i][size - i - 1];
	}

	if (mainDiagonal != sum || secondaryDiagonal != sum) {
		return false;
	}

	return true;
}

#endif // !EXERCISE17
