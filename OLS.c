#include <stdio.h>

int main() {
    int n, i;
    float x[10], y[10], sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0, a, b;
    printf("Enter number of data points: ");
    scanf("%d", &n);
    printf("Enter x and y values:\n");
    for (i = 0; i < n; i++) {
        scanf("%f%f", &x[i], &y[i]);
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumx2 += x[i] * x[i];
    }
    b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    a = (sumy - b * sumx) / n;
    printf("Fitted line: y = %.3f + %.3fx\n", a, b);
    return 0;
}
