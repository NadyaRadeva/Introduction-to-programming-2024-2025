#include<iostream>

const unsigned int DAYS_IN_FEBRUARY_LEAP_YEAR = 29;
const unsigned int DAYS_IN_FEBRUARY_NOT_LEAP_YEAR = 28;

//По-основни функции
int countDigitsOfANumber(int number);
int reverseNumber(int number);

int countDigitsOfANumber(int number) {
	int counter = 0;

	while (number != 0) {
		int d = number % 10;
		counter++;
		number /= 10;
	}

	return counter;
}

int reverseNumber(int number) {
	int revNumber = 0;
	while (number != 0) {
		int d = number % 10;
		revNumber = revNumber * 10 + d;
		number /= 10;
	}

	return revNumber;
}

//Declarations
//Exericse 1
void swap(int& a, int& b);
void swap(double& a, double& b);

//Exercise 2 + Exercise 7
int gcd(int num, int denom);

//Exercise 3
int removeKthDigit(int n, int k);

//Exercise 4
void createNewNumbers(int number);

//Exercise 5
int numberWithinIAndJ(int number, int i, int j);

//Exercise 6
int getKthDigit(int number, int k);
int replaceKthDigit(int number, int k, int newDigit);
void swapDigitsInTwoNumbers(int number1, int number2, int k);

//Exercise 8
int lmc(int number1, int number2);

//Exercise 9
unsigned int concat(unsigned int number1, unsigned int number2);

//Exercises for practicum - Exercise 1
bool isLeapYear(unsigned int year);
int getMaxDaysInMonth(unsigned int month, unsigned int year);
bool isDateCorrect(unsigned int day, unsigned int month, unsigned int year);
void findDateAfterNDays(unsigned int day, unsigned int month, unsigned int year, int n);

//Exercises for practicum - Exercise 2
int findMinSwaps(int bin1, int bin2, int n);

//Definitions
//Exercise 1
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;

	std::cout << a << " " << b << std::endl;
}

void swap(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;

	std::cout << a << " " << b << std::endl;
}

//Exercise 2 and Exercise 7
int gcd(int num, int denom) {
	while (num != denom) {
		if (num > denom) {
			num = num - denom;
		}
		else {
			denom = denom - num;
		}
	}
	return num;
}

//Exercise 3
int removeKthDigit(int number, int k) {
	int numLength = countDigitsOfANumber(number);
	int newNumber = 0;
	int revNumber = reverseNumber(number);
	int pos = numLength;

	if (k > numLength || k <= 0) {
		std::cerr << "You have entered an incorrect position!" << std::endl;
		return -1;
	}

	while (revNumber != 0) {
		int d = revNumber % 10;
		if (pos != k) {
			newNumber = newNumber * 10 + d;
		}
		revNumber /= 10;
		pos--;
	}

	return newNumber;
}

//Exercise 4
void createNewNumbers(int number) {
	int newNumberOdd = 0, newNumberEven = 0;
	int numberLength = countDigitsOfANumber(number);
	int reversedNumber = reverseNumber(number);
	int pos = numberLength;

	while (number != 0) {
		if (pos % 2 == 0) {
			int d = number % 10;
			newNumberEven = newNumberEven * 10 + d;
		}
		else {
			int d = number % 10;
			newNumberOdd = newNumberOdd * 10 + d;
		}
		pos--;
		number /= 10;
	}

	std::cout << "Number consisting of digits on odd positions: " << reverseNumber(newNumberOdd) << std::endl;
	std::cout << "Number consisting of digits on even positions: " << reverseNumber(newNumberEven) << std::endl;
}

//Exercise 5
int numberWithinIAndJ(int number, int i, int j) {
	if (i > j) {
		swap(i, j);
	}

	int revNumber = reverseNumber(number);
	int newNumber = 0;
	int numberLength = countDigitsOfANumber(number);
	int pos = numberLength;

	while (revNumber != 0) {
		int d = revNumber % 10;
		if (pos - 1 >= i && pos - 1 <= j) {
			newNumber = newNumber * 10 + d;
		}
		revNumber /= 10;
		pos--;
	}


	return newNumber;
}

//Exercise 6
int getKthDigit(int number, int k) {
	for (int i = 1; i < k; i++) {
		number /= 10;
	}
	return number % 10;
}

int replaceKthDigit(int number, int k, int newDigit) {
	int result = 0;
	int factor = 1;

	for (int i = 1; number != 0; i++) {
		int digit = number % 10;
		if (i == k) {
			digit = newDigit;
		}
		result = result + digit * factor;
		factor *= 10;
		number /= 10;
	}
	return result;
}

void swapDigitsInTwoNumbers(int number1, int number2, int k) {
	int reversedNumber1 = reverseNumber(number1);
	int reversedNumber2 = reverseNumber(number2);

	int kthDigitNumber1 = getKthDigit(reversedNumber1, k);
	int kthDigitNumber2 = getKthDigit(reversedNumber2, k);

	int newReversedNumber1 = replaceKthDigit(reversedNumber1, k, kthDigitNumber2);
	int newReversedNumber2 = replaceKthDigit(reversedNumber2, k, kthDigitNumber1);

	int newNumber1 = reverseNumber(newReversedNumber1);
	int newNumber2 = reverseNumber(newReversedNumber2);

	std::cout << "New number1 with swapped k-th digit: " << newNumber1 << std::endl;
	std::cout << "New number2 with swapped k-th digit: " << newNumber2 << std::endl;
}

//Exercise 8
int lmc(int number1, int number2) {
	int max = (number1 > number2) ? number1 : number2;

	do {
		if (max % number1 == 0 && max % number2 == 0) {
			return max;
			break;
		}
		else {
			++max;
		}
	} while (true);

	return max;
}

//Exercise 9
unsigned int concat(unsigned int number1, unsigned int number2) {
	int number1Length = countDigitsOfANumber(number1);
	int number2Length = countDigitsOfANumber(number2);

	int concatedNumber = number1;

	while (number2Length > 0) {
		concatedNumber *= 10;
		--number2Length;
	}

	concatedNumber += number2;

	return concatedNumber;
}

//Exercises for practicum - Exercise 1
bool isLeapYear(unsigned int year) {
	bool check = false;

	if (year % 4 == 0 && ((year % 100 != 0) || year % 400 == 0)) {
		check = true;
	}

	return check;
}

int getMaxDaysInMonth(unsigned int month, unsigned int year) {
	if (month == 2) {
		return isLeapYear(year) ? DAYS_IN_FEBRUARY_LEAP_YEAR : DAYS_IN_FEBRUARY_NOT_LEAP_YEAR;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	}
	return 31;
}

bool isDateCorrect(unsigned int day, unsigned int month, unsigned int year) {
	if (month < 1 || month > 12 || year < 0) {
		return false;
	}

	int maxDays = getMaxDaysInMonth(month, year);
	return day >= 1 && day <= maxDays;
}

void findDateAfterNDays(unsigned int day, unsigned int month, unsigned int year, int n) {
	if (!isDateCorrect(day, month, year)) {
		std::cerr << "Invalid date!" << std::endl;
		return;
	}

	for (int i = 0; i < n; ++i) {
		day++;
		int maxDays = getMaxDaysInMonth(month, year);
		if (day > maxDays) {
			day = 1;
			month++;

			if (month > 12) {
				month = 1;
				year++;
			}
		}
	}

	std::cout << "Date after " << n << " days: " << day << "/" << month << "/" << year << std::endl;
}

//Exercises for practicum - Exercise 2
int findMinSwaps(int bin1, int bin2, int n) {
	int count01 = 0;
	int count10 = 0;

	for (int i = 0; i < n; ++i) {
		int digit1 = bin1 % 10;
		int digit2 = bin2 % 10;

		if (digit1 != digit2) {
			if (digit1 == 0 && digit2 == 1) {
				count01++;
			}
			else if (digit1 == 1 && digit2 == 0) {
				count10++;
			}
		}

		bin1 /= 10;
		bin2 /= 10;
	}

	if (count01 != count10) {
		return -1; 
	}

	return count01;
}

int main() {
	//Exercise 1
	int num1, num2;
	std::cout << "Enter the values of number1 and number2: ";
	std::cin >> num1 >> num2;
	if (!std::cin) {
		std::cerr << "You should enter numbers!" << std::endl;
		return 1;
	}

	swap(num1, num2);

	double num3, num4;
	std::cout << "Enter the values of number1 and number2: ";
	std::cin >> num3 >> num4;
	if (!std::cin) {
		std::cerr << "You should enter numbers!" << std::endl;
		return 1;
	}

	swap(num3, num4);

	//Exercise 2
	int num1, denom1;
	std::cout << "Enter the numerator and denominator of your first fraction: ";
	std::cin >> num1 >> denom1;
	int grComDiv = gcd(num1, denom1);
	int newNum1 = num1 / grComDiv;
	int newDenom1 = denom1 / grComDiv;
	std::cout << num1 << "/" << denom1 << " = " << newNum1 << "/" << newDenom1 << std::endl;

	int num2, denom2;
	std::cout << "Enter the numerator and denominator of your second fraction: ";
	std::cin >> num2 >> denom2;
	int num12 = num1 * denom2 + num2 * denom1;
	int denom12 = denom1 * denom2;
	int grCommDev = gcd(num12, denom12);
	int newNum12 = num12 / grCommDev;
	int newDenom12 = denom12 / grCommDev;
	std::cout << num1 << "/" << denom1 << " + " << num2 << "/" << denom2 << " = " << newNum12 << "/" << newDenom12 << std::endl;

	//Exercise 3
	int number, pos;
	std::cout << "Enter a number and the position of the digit you'd like to remove: ";
	std::cin >> number >> pos;
	if (!std::cin || pos < 0) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	std::cout << "Your new number is: " << removeKthDigit(number, pos) << std::endl;


	//Exericse 4
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cerr << "You should enter a number!" << std::endl;
		return 1;
	}
	createNewNumbers(number);

	//Exercise 5
	int number, i, j;
	std::cout << "Enter the values of your number, I and J: ";
	std::cin >> number >> i >> j;
	if (!std::cin || i < 0 || j < 0) {
		std::cerr << "You should enter numbers!" << std::endl;
		return 1;
	}

	std::cout << "Your new number: " << numberWithinIAndJ(number, i, j) << std::endl;

	//Exercise 6
	int number1, number2, k;
	std::cout << "Enter your two numbers and the position of the digits you'd like to swap: ";
	std::cin >> number1 >> number2 >> k;
	int number1Length = countDigitsOfANumber(number1), number2Length = countDigitsOfANumber(number2);
	if (!std::cin || k > number1Length || k > number2Length || k <= 0) {
		std::cerr << "You have entered an incorrect input!" << std::endl;
		return 1;
	}
	swapDigitsInTwoNumbers(number1, number2, k);

	//Exercise 8
	int number1, number2;
	std::cout << "Enter the values of number 1 and number 2: ";
	std::cin >> number1 >> number2;
	if (!std::cin) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	std::cout << "The least common multiple of " << number1 << " and " << number2 << " is: " << lmc(number1, number2) << std::endl;

	//Exercise 9
	int number1, number2;
	std::cout << "Enter the values of number 1 and number2: ";
	std::cin >> number1 >> number2;
	if (!std::cin) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	std::cout << "The concatenation of " << number1 << " and " << number2 << " looks like this: " << concat(number1, number2) << std::endl;

	//Exericises for practicum - Exercise 1
	unsigned int day, month, year;
	std::cout << "Enter your day, month and year: ";
	std::cin >> day >> month >> year;
	if (!std::cin) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	//int n;
	std::cout << "Enter the number of days you want to find a date for: ";
	std::cin >> n;
	if (!std::cin || n < 0) {
		std::cerr << "You input is incorrect!" << std::endl;
		return 1;
	}

	findDateAfterNDays(day, month, year, n);

	//Exercises for practicum - Exercise 2
	int n, bin1, bin2;
	std::cout << "Enter the length of your binary numbers and your two binary numbers: ";
	std::cin >> n >> bin1 >> bin2;
	if (!std::cin || n < 0) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int result = findMinSwaps(bin1, bin2, n);
	if (result == -1) {
		std::cout << bin1 << "and " << bin2 << " can't become identical with any swaps!" << std::endl;
	}
	else {
		std::cout << "The minimum amount of swaps is: " << result << std::endl;
	}

	return 0;
}
