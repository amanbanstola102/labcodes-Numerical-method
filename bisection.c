#include <stdio.h>
#include <math.h>

float f(float x) {
    return x * x * x - x - 2;
}

int main() {
    float a, b, c, err;
    int i = 0;
    printf("Enter a, b, and error tolerance: ");
    scanf("%f%f%f", &a, &b, &err);
    while (fabs(b - a) >= err) {
        c = (a + b) / 2;
        if (f(c) == 0.0) break;
        if (f(a) * f(c) < 0) b = c;
        else a = c;
        i++;
    }
    printf("Root = %.5f\n", c);
    return 0;
}
