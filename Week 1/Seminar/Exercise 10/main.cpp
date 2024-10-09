#include<iostream>

int main() {
  char ch;
  std::cout << "Enter character: ";
  std::cin >> ch;
  ch = ch - 'a' + 'A';

  std::cout << "Character in upper case: " << ch << std::endl;

  return 1;
}
