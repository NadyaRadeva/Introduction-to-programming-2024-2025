#include<iostream>

int main() [
  int number;
  std::cout<<"Enter a number: ";
	std::cin >> number;
	int firstDig, secondDig, thirdDig, forthDig;
	forthDig = number % 10;
	thirdDig = (number / 10) % 10;
	secondDig = (number / 100) % 10;
	firstDig = number / 1000;
	int reversedNum = forthDig * 1000 + thirdDig * 100 + secondDig * 10 + firstDig;
	std::cout << "Reversed number: " <<reversedNum << " - " << reversedNum % 7 << " (mod 7)" << std::endl;

  return 1;
]
