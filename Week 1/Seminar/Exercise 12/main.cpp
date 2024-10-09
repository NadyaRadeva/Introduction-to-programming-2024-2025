#include<iostream>

int main() {
  int a, b;
  std::cout << "Enter the value of a: ";
  std::cin >> a;
  std::cout << "Enter the value of b: ";
  std::cin >> b;
  int expr = (a + b - 1) * (a + b - 1) * (a + b - 1) - (b - a + 1) * (b - a + 1);

  std::cout << "The value of the expression is: " << expr << std::endl;

  return 1;
}
