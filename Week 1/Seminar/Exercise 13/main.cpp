#include <iostream>

int main() {
    int levs;
    std::cout << "Enter sum in levs: ";
    std::cin >> levs;

    int count;

    count = levs / 100;
    std::cout << "Nominal value: 100 - " << count << " " << (count > 0 ? "" : "") << std::endl;
    levs %= 100;

    count = levs / 50;
    std::cout << "Nominal value: 50 - " << count << " " << (count > 0 ? "" : "") << std::endl;
    levs %= 50;

    count = levs / 20;
    std::cout << "Nominal value: 20 - " << count << " " << (count > 0 ? "" : "") << std::endl;
    levs %= 20;

    count = levs / 10;
    std::cout << "Nominal value: 10 - " << count << " " << (count > 0 ? "" : "") << std::endl;
    levs %= 10;

    count = levs / 5;
    std::cout << "Nominal value: 5 - " << count << " " << (count > 0 ? "" : "") << std::endl;
    levs %= 5;

    count = levs / 2;
    cout << "Nominal value: 2 - " << count << " " << (count > 0 ? "" : "") << std::endl;
    levs %= 2;

    count = levs;
    std::cout << "Nominal value: 1 - " << count << " " << (count > 0 ? "" : "") << std::endl;

    return 1;
}
