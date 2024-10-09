#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a Latin letter: ";
    std::cin >> ch;

    ch = ch + (ch >= 'a' && ch <= 'z' ? 'A' - 'a' : 'a' - 'A');

    std::cout << "The changed letter is: " << ch << std::endl;

    return 1;
}
