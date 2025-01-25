#include <iostream>
#ifndef EXERCISE3
#define EXERCISE3

const int MAX_CONSOLE_ROWS = 25;
const int MAX_CONSOLE_COLUMNS = 80;

void printSpaces(int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << " ";
    }
}

void printRectangle(int n, int m, char symbol) {
    if (n > MAX_CONSOLE_ROWS || m > MAX_CONSOLE_COLUMNS) {
        std::cout << "The rectangle is too large to fit in the console.\n";
        return;
    }

    int diffRows = MAX_CONSOLE_ROWS - n;
    int diffCols = MAX_CONSOLE_COLUMNS - m;

    int gapRows = diffRows / 2;
    int gapCols = diffCols / 2;

    for (int i = 0; i < gapRows; ++i) {
        printSpaces(MAX_CONSOLE_COLUMNS);
        std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i) {
        printSpaces(gapCols);
        for (int j = 0; j < m; ++j) {
            std::cout << symbol;
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < gapRows; ++i) {
        printSpaces(MAX_CONSOLE_COLUMNS);
        std::cout << std::endl;
    }
}

#endif // !EXERCISE3
