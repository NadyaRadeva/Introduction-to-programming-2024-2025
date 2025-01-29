#ifndef EXERCISE5
#define EXERCISE5

#include<iostream>

inline char** createMatrix(int n, int m) {
	char** matrix = new char* [n];

	for (size_t i = 0; i < n; ++i) {
		matrix[i] = new char[m];
	}

	return matrix;
}

inline void initialiseElsInMatrix(char** matrix, int n, int m) {
	std::cout << "Enter lines in matrix: " << std::endl;

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

inline void printMatrix(char** matrix, int n, int m) {
	std::cout << "Matrix:" << std::endl;

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}
}

inline void deleteMatrix(char** matrix, int n, int m) {
	for (size_t i = 0; i < n; ++i) {
		delete[] matrix[n];
	}

	delete[] matrix;
}

inline void createWord(char** matrix, int n, int m) {
	bool firstWord = true;
	for (int i = n - 1; i >= 0; i--) {
		for (int j = m - 1; j >= 0; j--) {
			if (!firstWord) {
				std::cout << " ";
			}
			std::cout << matrix[i][j];
			firstWord = false;
		}
	}
	std::cout << std::endl;
}

#endif // !EXERCISE5
