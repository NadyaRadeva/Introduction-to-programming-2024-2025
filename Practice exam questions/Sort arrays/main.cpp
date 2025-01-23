#include<iostream>
#include "Exercise1.h"

int main() {
	//Exercise 1
	int size1, size2;

	std::cout << "Enter the size of your first array: ";
	std::cin >> size1;
	if (!std::cin || size1 < 0) {
		std::cerr << "Invalid input! Your size should be a positive integer!" << std::endl;
		return 1;
	}

	int* arr1 = new int[size1];

	std::cout << "Enter the elements in your first array: " << std::endl;
	for (size_t i = 0; i < size1; ++i) {
		std::cin >> arr1[i];
		if (!std::cin) {
			std::cerr << "Invalid input! Your elements should be positive integer numbers!" << std::endl;
			return 1;
		}
	}

	printArrays(arr1, size1);

	std::cout << "Enter the size of your second array: ";
	std::cin >> size2;
	if (!std::cin || size2 < 0) {
		std::cerr << "Invalid input! Your size should be a positive integer!" << std::endl;
		return 1;
	}

	int* arr2 = new int[size2];

	std::cout << "Enter the elements in your second array: " << std::endl;
	for (size_t i = 0; i < size2; ++i) {
		std::cin >> arr2[i];
		if (!std::cin) {
			std::cerr << "Invalid input! Your elements should be positive integer numbers!" << std::endl;
			return 1;
		}
	}


	printArrays(arr2, size2);

	int* arrRes = createArrResult(arr1, arr2, size1, size2);
	printArrays(arrRes, size1 + size2);

	delete[] arrRes;
	delete[] arr1;
	delete[] arr2;

	return 0;
}
