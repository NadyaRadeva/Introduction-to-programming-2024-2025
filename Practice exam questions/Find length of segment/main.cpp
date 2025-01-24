#include<iostream>

#include "Exercise2.h"

int main() {
    Vector vec1 = { 2, 1, 2, 5 };
    Vector vec2 = { 2, 3, 2, 6 };

    double result1 = commonSegmentLength(vec1, vec2);
    if (result1 == -1) {
        std::cout << "The vectors and not parallel to the axis or they don't allign!" << std::endl;
    }
    else {
        std::cout << "The length is: " << result1 << std::endl;
    }

    Vector vec3 = { 1, 2, 5, 2 };
    Vector vec4 = { 3, 2, 6, 2 };

    double result2 = commonSegmentLength(vec3, vec4);
    if (result2 == -1) {
        std::cout << "The vectors and not parallel to the axis or they don't allign!";
    }
    else {
        std::cout << "The length is: " << result2 << std::endl;
    }

    Vector vec5 = { 1, 1, 3, 4 };
    Vector vec6 = { 2, 2, 4, 5 };

    double result3 = commonSegmentLength(vec5, vec6);
    if (result3 == -1) {
        std::cout << "The vectors and not parallel to the axis or they don't allign!";
    }
    else {
        std::cout << "The length is: " << result3 << std::endl;
    }

    return 0;
}
