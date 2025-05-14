#include <stdio.h>

float f(float x) {
    return x * x;
}

int main() {
    int n, i;
    float a, b, h, sum = 0;
    printf("Enter lower limit, upper limit, and number of intervals: ");
    scanf("%f%f%d", &a, &b, &n);
    h = (b - a) / n;
    sum = f(a) + f(b);
    for (i = 1; i < n; i++) {
        sum += 2 * f(a + i * h);
    }
    sum = sum * h / 2;
    printf("Integral value = %.5f\n", sum);
    return 0;
}
