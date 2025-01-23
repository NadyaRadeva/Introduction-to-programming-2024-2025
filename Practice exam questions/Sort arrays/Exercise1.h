#ifndef EXERCISE1
#define EXERCISE1

void printArrays(int* arr, int size) {
	std::cout << "Your array: ";
	for (size_t i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}

bool isArrSortedLowToHigh(int* arr, int size) {
	for (size_t i = 0; i < size - 1; ++i) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}

	return true;
}


void sortArr(int* arr, int size) {
	int minIndex, minEl;

	for (size_t i = 0; i < size - 1; ++i) {
		minIndex = i;
		minEl = arr[i];

		for (size_t j = i + 1; j < size; ++j) {
			if (arr[j] < minEl) {
				minIndex = j;
				minEl = arr[j];
			}
		}

		arr[minIndex] = arr[i];
		arr[i] = minEl;
	}
}

int* createArrResult(int* arr1, int* arr2, int size1, int size2) {
	int size3 = size1 + size2;
	int* arrRes = new int[size3];

	if (!(isArrSortedLowToHigh(arr1, size1) || isArrSortedLowToHigh(arr2, size2))) {
		sortArr(arr1, size1);
		sortArr(arr2, size2);
	}

	for (size_t i = 0; i < size1; ++i) {
		arrRes[i] = arr1[i];
	}
	int j = 0;
	for (size_t i = size1; i < size3; ++i) {
		arrRes[i] = arr2[j];
		++j;
	}

	sortArr(arrRes, size3);

	return arrRes;
}



#endif // !EXERCISE1
