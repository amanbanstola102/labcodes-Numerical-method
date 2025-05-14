#include <stdio.h>

int main() {
    int n, i, j;
    float x[10], y[10], xp, yp = 0.0, p;
    printf("Enter number of data points: ");
    scanf("%d", &n);
    printf("Enter x and y values:\n");
    for (i = 0; i < n; i++) scanf("%f%f", &x[i], &y[i]);
    printf("Enter value to interpolate: ");
    scanf("%f", &xp);
    for (i = 0; i < n; i++) {
        p = 1.0;
        for (j = 0; j < n; j++) {
            if (j != i) p *= (xp - x[j]) / (x[i] - x[j]);
        }
        yp += p * y[i];
    }
    printf("Interpolated value = %.5f\n", yp);
    return 0;
}
