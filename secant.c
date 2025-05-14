#include <stdio.h>
#include <math.h>

float f(float x) {
    return x * x * x - x - 2;
}

int main() {
    float x0, x1, x2, err;
    int i = 0;
    printf("Enter x0, x1, and error tolerance: ");
    scanf("%f%f%f", &x0, &x1, &err);
    do {
        x2 = x1 - f(x1)*(x1 - x0)/(f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
        i++;
    } while (fabs(f(x2)) > err);
    printf("Root = %.5f\n", x2);
    return 0;
}
