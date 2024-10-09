#include<iostream>

int main() {
    float a, b;
    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;

    float epsilon = 0.000001;

    cout << ((a - b < epsilon && b - a < epsilon) ? 1 : 0) << endl;

    return 0;
}
