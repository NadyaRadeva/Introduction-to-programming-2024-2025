#ifndef EXERCISE12
#define EXERCISE12

#include<iostream>

inline bool isEven(int digit) {
	return digit % 2 == 0;
}

inline bool doesNumHasEvenDigits(int number) {
	while (number > 0) {
		int ld = number % 10;
		if (!isEven(ld)) {
			return false;
		}
		number /= 10;
	}

	return true;
}

inline int generateMinKthNumber(int k) {
	int number = 1;

	for (size_t i = 0; i < k - 1; ++i) {
		number *= 10;
	}

	return number;
}

inline int generateMaxKthNumber(int k) {
	int number = 1;

	for (size_t i = 0; i < k; ++i) {
		number *= 10;
	}

	return number - 1;
}



inline bool isNumberPerfectSquare(int number) {
	if (number < 0) {
		return false;
	}

	for (int i = 1; i * i <= number; i++) {
		if (i * i == number) {
			return true;
		}
	}

	return false;
}

inline void findNumbers(int k) {
	int start = generateMinKthNumber(k);
	int end = generateMaxKthNumber(k);

	for (size_t i = start; i <= end; ++i) {
		if (doesNumHasEvenDigits(i) && isNumberPerfectSquare(i)) {
			std::cout << i << " ";
		}
	}

	std::cout << std::endl;
}

#endif // !EXERCISE12
