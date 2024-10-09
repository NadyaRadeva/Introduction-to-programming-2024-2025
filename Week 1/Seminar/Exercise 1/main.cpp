#include<iostream>

int main() {
  int a;
  std::cout << "Enter the value of a: ";
	std::cin >> a;
	bool isEven = a % 2 == 0 ? 1 : 0;
	std::cout << isEven << std::endl;
  return 1;
}
