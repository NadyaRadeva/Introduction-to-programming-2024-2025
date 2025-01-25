#include<iostream>

#include "Exercise3.h"

int main() {
	int n, m;

	std::cout << "Enter side 1 of the rectangle: ";
	std::cin >> n;
	if (!std::cin || n < 0) {
		std::cerr << "Invalid input! The side should be a positive integer number!" << std::endl;
		return 1;
	}

	std::cout << "Enter side 2 of the rectangle: ";
	std::cin >> m;
	if (!std::cin || m < 0) {
		std::cerr << "Invalid input! The side should be a positive integer number!" << std::endl;
		return 1;
	}

	std::cout << "Enter a symbol: ";
	char symbol;
	std::cin >> symbol;
	if (!std::cin) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	printRectangle(n, m, symbol);

	return 0;
}
