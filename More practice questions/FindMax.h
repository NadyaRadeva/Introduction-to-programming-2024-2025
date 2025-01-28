#ifndef EXERCISE1

const int MAX_ELEMENTS_INT_ARR = 100;
const int MIN_ELEMENTS_INT_ARR = 1;

int* createArr(int size) {
	if (!std::cin ||size < MIN_ELEMENTS_INT_ARR || size > MAX_ELEMENTS_INT_ARR) {
		std::cerr << "Invalid size!" << std::endl;
		return nullptr;
	}

	int* arr = new int[size];
}

int findMaxElInArr(int* arr, int size) {
	int maxEl = arr[0];

	for (size_t i = 0; i < size; ++i) {
		if (maxEl < arr[i]) {
			maxEl = arr[i];
		}
	}

	return maxEl;
}

#endif // !EXERCISE1
