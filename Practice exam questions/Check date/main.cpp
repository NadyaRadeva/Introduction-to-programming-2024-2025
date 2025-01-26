#include<iostream>
#include "Exercise8.h"

const int MAX_INPUT_LEN = 5;

int main() {
	char date[MAX_INPUT_LEN];
	std::cout << "Enter a date (days and months): ";
	std::cin.getline(date, MAX_INPUT_LEN);

	std::cout << "The date is valid? - " << std::boolalpha << checkDate(date) << std::endl;

	return 0;
}