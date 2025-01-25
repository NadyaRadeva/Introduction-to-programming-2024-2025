#include<iostream>
#include "Exercise7.h"

int main() {
	int strSize;
	std::cout << "Enter the size of your matrix: ";
	std::cin >> strSize;
	if (!std::cin || strSize < 0) {
		std::cerr << "Invalid input! The size should be a positive integer number!" << std::endl;
		return 1;
	}
	std::cin.ignore();

	std::cout << "Enter your string: ";
	char* str = new char[strSize + 1];
	std::cin.getline(str, strSize);

	revert(str, strSize);
	std::cout << "Reverted string: " << str << std::endl;

	return 0;
}