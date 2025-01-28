#include<iostream>
#include "Exercise2.h"

int main() {
	//Exercise 2
	int size;
	std::cout << "Enter size of the array: ";
	std::cin >> size;
	if (!std::cin || size < 0) {
		std::cerr << "Invalid size!" << std::endl;
		return 1;
	}

	int* arr = createArr(size);

	std::cout << "Enter elements in array: ";
	for (size_t i = 0; i < size; ++i) {
		std::cin >> arr[i];
		if (!std::cin) {
			std::cerr << "Invalid input!" << std::endl;
			return 1;
		}
	}

	std::cout << "Array: ";
	for (size_t i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	findOccurencesOf012InArr(arr, size);

	delete[] arr;

	return 0;
}
