#include<iostream>
#include "Exercise10.h"

int main() {
	int wordLen;
	std::cout << "Enter the length of your text: ";
	std::cin >> wordLen;
	if (!std::cin || wordLen < 0) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}
	std::cin.ignore();
	char* word = new char[wordLen];
	std::cin.getline(word, wordLen);

	int subStrLen;
	std::cout << "Enter the length of your text you are looking for: ";
	std::cin >> subStrLen;
	if (!std::cin || subStrLen < 0) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}
	std::cin.ignore();
	char* subStr = new char[subStrLen];
	std::cin.getline(subStr, subStrLen);

	std::cout << subStr << " is part of " << word << "? - " << std::boolalpha << doExist(subStr, word) << std::endl;

	return 0;
}