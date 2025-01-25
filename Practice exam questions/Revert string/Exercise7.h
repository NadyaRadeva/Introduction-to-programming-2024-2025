#ifndef EXERCISE7
#define EXERCISE7

#include<iostream>

const int TO_LOWER_CASE = 'a' - 'A';
const int TO_UPPER_CASE = 'A' - 'a';

inline bool isLowerCase(char symbol) {
	return (symbol >= 'a' && symbol <= 'z');
}

inline bool isUpperCase(char symbol) {
	return (symbol >= 'A' && symbol <= 'Z');
}

inline void revert(char* str, int size) {
	for (size_t i = 0; i < size; ++i) {
		if (isLowerCase(str[i])) {
			str[i] += TO_UPPER_CASE;
		}
		else if (isUpperCase(str[i])) {
			str[i] += TO_LOWER_CASE;
		}
		else {
			str[i] = str[i];
		}
	}
}


#endif // !EXERCISE7
