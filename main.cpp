#include <iostream>

void pot(int *x, int i);

int main() {
    int x = 10;
    pot(&x, 3);
    std::cout << x << std::endl;
    return 0;
}

void pot(int *x, int i) {
    int y = *x;
    for (int j = 1; j < i; ++j) {
        y *= *x;
    }
    *x = y;
}
