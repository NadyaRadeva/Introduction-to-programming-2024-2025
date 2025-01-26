#ifndef EXERCISE8
#define EXERCISE8

inline bool isDigit(char symbol);
inline bool isPoint(char symbol);
inline int turnDayToNum(char* date);
inline int turnMonthsToNum(char* date);
inline bool checkDate(char* date);

const int TO_INT = -'0';

inline bool isDigit(char symbol) {
	return symbol >= '0' && symbol <= '9';
}

inline bool isPoint(char symbol) {
	return symbol == '.';
}

inline int turnDayToNum(char* date) {
	int number = 0;

	if (isDigit(date[0])) {
		number += (date[0] + TO_INT) * 10;
	}
	if (isDigit(date[1])) {
		number += date[1] + TO_INT;
	}
	else {
		return -1;
	}

	return number;
}

inline int turnMonthsToNum(char* date) {
	int number = 0;

	if (isDigit(date[3])) {
		number += (date[3] + TO_INT) * 10;
	}
	if (isDigit(date[4])) {
		number += date[4] + TO_INT;
	}
	else {
		return -1;
	}

	return number;
}

inline bool checkDate(char* date) {
	if (date == nullptr || date[2] != '.' || date[5] != '\0') {
		return false;
	}

	int days = turnDayToNum(date);
	int months = turnMonthsToNum(date);

	bool isDateValid = false;

	if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12) {
		if (days >= 1 && days <= 31 && isPoint(date[2])) {
			isDateValid = true;
		}
	}
	else if (months == 4 || months == 6 || months == 9 || months == 11) {
		if (days >= 1 && days <= 30 && isPoint(date[2])) {
			isDateValid = true;
		}
	}
	else if (months == 2) {
		if ((days >= 1 && days <= 29) && isPoint(date[2])) {
			isDateValid = true;
		}
	}
	
	return isDateValid;
}

#endif // !EXERCISE8
