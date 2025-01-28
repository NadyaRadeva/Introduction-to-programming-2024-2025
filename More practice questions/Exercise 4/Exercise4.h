#ifndef EXERCISE4

const int MAX_ELEMENTS_IN_ARRAY1 = 100;
const int MIN_ELEMENTS_IN_ARRAY1 = 1;

inline int* createArray(int size) {
	if (!std::cin || size < MIN_ELEMENTS_IN_ARRAY1 || size > MAX_ELEMENTS_IN_ARRAY1) {
		std::cerr << "Invalid size!" << std::endl;
		return nullptr;
	}

	int* arr = new int[size];

	return arr;
}

inline int findFirstPositiveEl(int* arr, int size) {
	for (size_t i = 0; i < size; ++i) {
		if (arr[i] > 0) {
			return i;
		}
	}

	return -1;
}

inline int findLastPositiveEl(int* arr, int size) {
	int pos = 0;

	for (size_t i = 0; i < size; ++i) {
		if (arr[i] > 0) {
			pos = i;
		}
	}

	return pos;
}

inline int findPthPositiveElement(int* arr, int size, int p) {
	int pos = 0;
	int counter = 0;

	for (size_t i = 0; i < size; ++i) {
		if (arr[i] > 0) {
			counter++;
		}
		if (counter == p) {
			return i;
		}
	}

	return -1;
}

#endif // !EXERCISE4
