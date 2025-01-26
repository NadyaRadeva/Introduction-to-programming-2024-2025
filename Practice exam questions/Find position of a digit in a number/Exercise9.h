#ifndef EXERCISE9
#define EXERCISE9

int reverseNumber(int number) {
	int newNum = 0;

	while (number) {
		newNum = newNum * 10 + number % 10;
		number /= 10;
	}

	return newNum;
}

int countDigitsInNum(int number) {
	int counter = 0;

	while (number != 0) {
		number /= 10;
		counter++;
	}

	return counter;
}

int* createDigitsArr(int number) {
	int arrSize = countDigitsInNum(number);
	int counter = 0;

	int* digitsArr = new int[arrSize];
	int newNumber = reverseNumber(number);

	while (newNumber != 0) {
		digitsArr[counter++] = newNumber % 10;
		newNumber /= 10;
	}

	return digitsArr;
}

int digitPos(int number, int k) {
	int* digitsArr = createDigitsArr(number);
	int arrSize = countDigitsInNum(number);

	int pos = 0;

	for (size_t i = 0; i < arrSize; ++i) {
		if (digitsArr[i] == k) {
			pos = i + 1;
		}
	}

	if (pos == 0) {
		return -1;
	}

	delete[] digitsArr;

	return pos;
}

#endif // !EXERCISE9
