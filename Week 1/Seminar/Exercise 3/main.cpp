#include<iostream>

int main() {
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;
  int lastDigit = number % 10;
  std::cout << "Last digit of " << number << ": " << lastDigit << std::endl;
  
  return 1;
}
