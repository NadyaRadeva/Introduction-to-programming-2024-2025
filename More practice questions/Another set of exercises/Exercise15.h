#ifndef EXERCISE15
#define EXERCISE15

inline double u(int i);
inline double v(int i);

inline double u(int i) {
    if (i == 0 || i == 1) {
        return 0;
    }

    return (u(i - 1) - 2 * u(i - 2) * v(i - 2) - v(i - 2)) / (1 - (u(i - 1) * u(i - 1)) + (v(i - 2) * v(i - 2)));
}

inline double v(int i) {
    if (i == 0 || i == 1) {
        return 1;
    }

    double sum = u(i - 2) + v(i - 1);

    return (u(i - 1) - v(i - 1)) / (2 + (sum < 0 ? -sum : sum));
}

#endif // !EXERCISE15
