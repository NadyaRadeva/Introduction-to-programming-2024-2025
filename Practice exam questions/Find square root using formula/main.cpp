#include<iostream>
#include "Exercise6.h"

int main() {
	int a;
	double eps;

	std::cout << "Enter a number: ";
	std::cin >> a;
	if (!std::cin || a < 0) {
		std::cerr << "Invalid input! Your number should be a positive integer!" << std::endl;
		return 1;
	}

	std::cout << "Enter the how precise you want your calculation to be: ";
	std::cin >> eps;
	if (!std::cin || eps < 0) {
		std::cerr << "Invalid input! Your number should be a positive decimal number!" << std::endl;
		return 1;
	}

	double res = sqrt_a(a, a, eps);

	std::cout << "The square root of " << a << " with an estimate of " << eps << " is: " << res << std::endl;

	return 0;
}