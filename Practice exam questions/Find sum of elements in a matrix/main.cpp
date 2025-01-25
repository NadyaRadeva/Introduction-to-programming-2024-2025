#include<iostream>

#include "Exercise4.h"

int main() {
	std::cout << "Enter the size of your matrix: ";
	int size;
	std::cin >> size;
	if (!std::cin || size < 0) {
		std::cerr << "Invalid input! The size of your matrix should e a positive integer!" << std::endl;
		return 1;
	}

	int** matrix = createMatirx(size);

	initialiseElementsInMatrix(matrix, size);

	printMatrix(matrix, size);

	std::cout << "The sum of the elements above the principal diagonal is: " << findSum(size, matrix) << std::endl;

	deleteMatrix(matrix, size);

	return 0;
}
