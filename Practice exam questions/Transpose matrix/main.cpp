#include<iostream>
#include "Exercise5.h"

int main() {
	int size;
	std::cout << "Enter the size of your matrix: ";
	std::cin >> size;
	if (!std::cin || size < 0) {
		std::cerr << "Invalid input! The size of the matrix should be a positive integer number!" << std::endl;
		return 1;
	}

	int** matrix = createMatrix(size);

	initialiseElementsInMatrix(matrix, size);

	printMatrix(matrix, size);

	transposeMatrix(matrix, size);

	deleteMatrix(matrix, size);

	return 0;
}