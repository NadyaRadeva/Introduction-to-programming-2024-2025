#ifndef EXERCISE2
#include<iostream>

const int MAX_ELEMENTS_INT_ARR = 100;
const int MIN_ELEMENTS_INT_ARR = 1;

int* createArr(int size) {
	if (!std::cin || size < MIN_ELEMENTS_INT_ARR || size > MAX_ELEMENTS_INT_ARR) {
		std::cerr << "Invalid size!" << std::endl;
		return nullptr;
	}

	int* arr = new int[size];

	return arr;
}


int findOccurencesOf0InNum(int number) {
	int occurencesOf0 = 0;

	while (number != 0) {
		if (number % 10 == 0) {
			occurencesOf0++;
		}
		number /= 10;
	}

	return occurencesOf0;
}

int findOccurencesOf1InNum(int number) {
	int occurencesOf1 = 0;

	while (number != 0) {
		if (number % 10 == 1) {
			occurencesOf1++;
		}
		number /= 10;
	}

	return occurencesOf1;
}

int findOccurencesOf2InNum(int number) {
	int occurencesOf2 = 0;

	while (number != 0) {
		if (number % 10 == 1) {
			occurencesOf2++;
		}
		number /= 10;
	}

	return occurencesOf2;
}

void findOccurencesOf012InArr(int* arr, int size) {
	int totalOccurencesOf0 = 0;
	int totalOccurencesOf1 = 0;
	int totalOccurencesOf2 = 0;

	for (size_t i = 0; i < size; ++i) {
		totalOccurencesOf0 += findOccurencesOf0InNum(arr[i]);
		totalOccurencesOf1 += findOccurencesOf1InNum(arr[i]);
		totalOccurencesOf2 += findOccurencesOf2InNum(arr[i]);
	}

	std::cout << "Occurences of 0 in array: " << totalOccurencesOf0 << std::endl;
	std::cout << "Occurences of 1 in array: " << totalOccurencesOf1 << std::endl;
	std::cout << "Occurences of 2 in array: " << totalOccurencesOf2 << std::endl;
}

#endif // !EXERCISE2
