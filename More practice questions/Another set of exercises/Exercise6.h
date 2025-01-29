#ifndef EXERCISE6
#define EXERCISE6

bool isNumFibonacci(int number) {
	if (number == 0 || number == 1) {
		return true;
	}

	int a = 0, b = 1;

	while (b < number) {
		int temp = b;
		b = a + b;
		a = temp;
	}

	return b == number;
}

#endif // !EXERCISE6
