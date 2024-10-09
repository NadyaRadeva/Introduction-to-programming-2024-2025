#include<iostream>

int main() {
  int a, b;
	std::cout << "Enter the value of number a: ";
	std::cin >> a;
	std::cout << "Enter the value of number b: ";
	std::cin >> b;

	(a == b) ? (std::cout << '=' << std::endl) : (std::cout << (a > b ? a : b)) << std::endl;

  return 1;
}
