#include <stdio.h>

int main() {
    int n, i, j;
    float x[10], y[10][10], xp, h, u, result, term;
    printf("Enter number of data points: ");
    scanf("%d", &n);
    printf("Enter x and y values:\n");
    for (i = 0; i < n; i++) {
        scanf("%f%f", &x[i], &y[i][0]);
    }
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }
    printf("Enter value to interpolate: ");
    scanf("%f", &xp);
    h = x[1] - x[0];
    u = (xp - x[0]) / h;
    result = y[0][0];
    term = 1;
    for (i = 1; i < n; i++) {
        term *= (u - i + 1) / i;
        result += term * y[0][i];
    }
    printf("Interpolated value = %.5f\n", result);
    return 0;
}
