#ifndef EXERCISE3
#define EXERCISE3
#include<iostream>

const int MAX_ELEMENTS_IN_ARRAY = 100;
const int MIN_ELEMENTS_IN_ARRAY = 1;

inline bool isInInterval(int p, int q, int number) {
	return number >= p && number <= q;
}

inline bool isOdd(int number) {
	return number % 2 != 0;
}

inline bool isEven(int number) {
	return number % 2 == 0;
}

inline int* createArray(int size) {
	if (!std::cin || size < MIN_ELEMENTS_IN_ARRAY || size > MAX_ELEMENTS_IN_ARRAY) {
		std::cerr << "Invalid size!" << std::endl;
		return nullptr;
	}

	int* arr = new int[size];

	return arr;
}

inline int findEvenNumsInOddPos(int* arr, int size, int p, int q) {
	int counter = 0;

	for (size_t i = 0; i < size; ++i) {
		if (isEven(arr[i]) && isOdd(i) && isInInterval(p, q, arr[i])) {
			++counter;
		}
	}

	return counter;
}

#endif // !EXERCISE3
