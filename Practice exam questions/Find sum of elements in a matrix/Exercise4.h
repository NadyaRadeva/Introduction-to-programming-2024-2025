#ifndef EXERCISE4
#define EXERCISE4

#include<iostream>

int** createMatirx(int n) {
	int** matrix = new int* [n];

	for (size_t i = 0; i < n; ++i) {
		matrix[i] = new int[n];
	}

	return matrix;
}

void initialiseElementsInMatrix(int** matrix, int n) {
	std::cout << "Enter elements in matrix: " << std::endl;

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < n; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

void printMatrix(int** matrix, int n) {
	std::cout << "Your matrix: " << std::endl;

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < n; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void deleteMatrix(int** matrix, int n) {
	for (size_t i = 0; i < n; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

int findSum(int n, int** matrix) {
	int sum = 0;

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < n; ++j) {
			if (i < j) {
				sum += matrix[i][j];
			}
		}
	}

	return sum;
}

#endif // !EXERCISE4
