#ifndef EXERCISE18
#define EXERCISE18

void f(int x) {
    int k = 0;

    while (x != 1 && k < 500) {
        if (x % 2 == 0) {
            x /= 2;
        }
        else {
            x = 3 * x + 1;
        }
        k++;
    }
}

#endif // !EXERCISE18
