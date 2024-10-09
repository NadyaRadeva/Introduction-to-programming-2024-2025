#include<iostream>

int main() {
  char ch;
  std::cout << "Enter a character: ";
  std::cin >> ch;
  int charToInt = ch - '0';
  std::cout << "Char to int: " << charToInt << std::endl;

  return 1;
}
