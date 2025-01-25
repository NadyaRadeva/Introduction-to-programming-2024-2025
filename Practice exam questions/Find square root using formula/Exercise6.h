#ifndef EXERCISE6
#define EXERCISE6

#include<iostream>

double sqrt_a(double a, double xk, double eps) {
    if (a == 0) {
        return 0;
    }

    double xk1 = 0.5 * (xk + a / xk);

    if ((xk1 > xk && xk1 - xk < eps) || (xk > xk1 && xk - xk1 < eps)) {
        return xk1;
    }

    return sqrt_a(a, xk1, eps);
}

#endif // !EXERCISE6
