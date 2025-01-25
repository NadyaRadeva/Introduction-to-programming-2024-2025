#ifndef EXERCISE5
#define EXERCISE5

#include<iostream>

int** createMatrix(int size) {
	int** matrix = new int* [size];

	for (size_t i = 0; i < size; ++i) {
		matrix[i] = new int[size];
	}

	return matrix;
}

void initialiseElementsInMatrix(int** matrix, int size) {
	std::cout << "Enter elements in your matrix: " << std::endl;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cin >> matrix[i][j];
		}
	}

	std::cout << std::endl;
}

void printMatrix(int** matrix, int size) {
	std::cout << "Your matrix: " << std::endl;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void deleteMatrix(int** matrix, int size) {
	for (size_t i = 0; i < size; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

void transposeMatrix(int** matrix, int size) {
	std::cout << "Transposed matrix: " << std::endl;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cout << matrix[j][i] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

#endif // !EXERCISE5
