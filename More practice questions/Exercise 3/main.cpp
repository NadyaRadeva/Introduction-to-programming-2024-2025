#include<iostream>
#include "Exercise3.h"

int main() {
	std::cout << "Enter array size: ";
	int size;
	std::cin >> size;

	int* arr = createArray(size);

	std::cout << "Enter elements in array: ";
	for (size_t i = 0; i < size; ++i) {
		std::cin >> arr[i];
		if (!std::cin) {
			std::cerr << "Invalid input!" << std::endl;
			return 1;
		}
	}

	std::cout << "Print array: ";
	for (size_t i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "Enter the beginning and end of interval: ";
	int p, q;
	std::cin >> p >> q;
	if (!std::cin) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	if (p > q) {
		int temp = p;
		p = q;
		q = temp;
	}

	std::cout << "Find how many even numbers there are at odd positions in the array: " << findEvenNumsInOddPos(arr, size, p, q) << std::endl;

	delete[] arr;

	return 0;
}
