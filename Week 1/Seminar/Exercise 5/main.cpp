#include<iostream>

int main() {
  char ch;
	std::cout << "Enter a character: ";
	std::cin >> ch;
	bool isConsonant = ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) && ch != 'A' && ch != 'a' && ch != 'e' && ch != 'E' && ch != 'i' && ch != 'I' && ch != 'o' && ch != 'O' && ch != 'u' && ch != 'U';
	std::cout << isConsonant << std::endl;

  return 1;
}
