#ifndef EXERCISE9
#define EXERCISE9

#include<iostream>


inline bool isPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

inline void printTwinPrimes(int count) {
    int foundPairs = 0;
    int number = 3;

    for (size_t i = 0; i < count; ++i) {
        if (isPrime(number) && isPrime(number + 2)) {
            std::cout << number << " " << number + 2 << std::endl;
            ++foundPairs;
        }
        number += 2;
    }
}

#endif // !EXERCISE9
