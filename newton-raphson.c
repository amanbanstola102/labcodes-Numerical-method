#include <stdio.h>
#include <math.h>

float f(float x) {
    return x * x * x - x - 2;
}

float df(float x) {
    return 3 * x * x - 1;
}

int main() {
    float x, x0, err;
    int i = 0;
    printf("Enter initial guess and error tolerance: ");
    scanf("%f%f", &x0, &err);
    do {
        x = x0 - f(x0)/df(x0);
        x0 = x;
        i++;
    } while (fabs(f(x)) > err);
    printf("Root = %.5f\n", x);
    return 0;
}
