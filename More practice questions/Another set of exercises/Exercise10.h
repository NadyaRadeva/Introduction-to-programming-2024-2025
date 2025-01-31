#ifndef EXERCISE10
#define EXERCISE10

#include<iostream>

void sortArray(int size, int* array) {
	int minEl, minIndex;

	for (size_t i = 0; i < size - 1; ++i) {
		minIndex = i;
		minEl = array[minIndex];

		for (size_t j = i + 1; j < size; ++j) {
			if (array[j] < minEl) {
				minIndex = j;
				minEl = array[minIndex];
			}
		}

		array[minIndex] = array[i];
		array[i] = minEl;
	}
}


void findLongestPath(int* array, int size) {
	if (size == 0) {
		std::cout << "Array is empty!" << std::endl;
		return;
	}

	int longestPathStartEl = array[0], longestPathStartPos = 0;
	int longestPathSize = 1, currentPathSize = 1;
	int currentPathStartPos = 0;

	for (size_t i = 1; i < size; ++i) {
		if (array[i] == array[i - 1]) {
			currentPathSize++;
		} 
		else {
			if (currentPathSize > longestPathSize) {
				longestPathSize = currentPathSize;
				longestPathStartEl = array[i - 1];
				longestPathStartPos = currentPathStartPos;
			}
			currentPathSize = 1;
			currentPathStartPos = i;
		}
	}

	if (currentPathSize > longestPathSize) {
		longestPathSize = currentPathSize;
		longestPathStartEl = array[size - 1];
		longestPathStartPos = currentPathStartPos;
	}

	std::cout << "Start position of the longest path in the array: " << longestPathStartPos << std::endl;
	std::cout << "Length of the longest path in the array: " << longestPathSize << std::endl;
}

#endif // !EXERCISE10
