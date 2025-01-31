#ifndef EXERCISE13
#define EXERCISE13

bool isPowerOfN(int num, int n) {
    if (num < 1) {
        return false;
    }

    int power = 1;

    while (power <= num) {
        if (power == num) {
            return true;
        }
        if (num / n < power) {
            break;
        }
        power *= n;
    }

    return false;
}

#endif // !EXERCISE13
