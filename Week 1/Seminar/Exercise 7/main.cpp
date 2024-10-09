#include<iostream>

int main() {
  //1. With additional variable:
  int a, b, c;
  std::cout << "Enter the value of a: ";
  std::cin >> a;
  std::cout << "Enter the value of b: ";
  std::cin >> b;
  c = a;
  a = b;
  b = a;
  std::cout << "Reversed a: " << a << std::endl;
  std::cout << "Reversed b: " << b << std::endl;

  //2. Without additional variable:
  int a, b;
	std::cout << "Enter the value of a: ";
	std::cin >> a;
	std::cout << "Enter the value of b: ";
	std::cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	std::cout << "Reversed value of a: " << a << std::endl;
	std::cout << "Reversed value of b:" << b << std::endl;

  return 1;
}
