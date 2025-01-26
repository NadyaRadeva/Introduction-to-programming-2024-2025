#include<iostream>
#include "Exercise9.h"

int main() {
	int number, k;

	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cerr << "Invalid input! You should enter an integer number!" << std::endl;
		return 1;
	}

	std::cout << "Enter the digit you are looking for: ";
	std::cin >> k;
	if (!std::cin || k < 0) {
		std::cout << "Invalid input! You should enter a positive integer digit!" << std::endl;
		return 1;
	}

	std::cout << "The position of " << k << " in " << number << " is: " << digitPos(number, k) << std::endl;

	return 0;
}