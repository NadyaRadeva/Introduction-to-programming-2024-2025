#include<iostream>

int main() {
  char ch;
  std::cout << "Enter a character: ";
  std::cin >> ch;
  int charToInt = (int)ch;
  std::cout << "Char to int: " << charToInt << std::endl;

  return 1;
}
