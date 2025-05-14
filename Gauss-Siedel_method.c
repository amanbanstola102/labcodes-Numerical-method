#include <stdio.h>
#include <math.h>

int main() {
    float a[3][4], x[3] = {0}, x_old[3], err, diff;
    int i, j;
    printf("Enter augmented matrix (3x4):\n");
    for (i = 0; i < 3; i++) for (j = 0; j < 4; j++) scanf("%f", &a[i][j]);
    printf("Enter error tolerance: ");
    scanf("%f", &err);
    do {
        for (i = 0; i < 3; i++) x_old[i] = x[i];
        for (i = 0; i < 3; i++) {
            x[i] = a[i][3];
            for (j = 0; j < 3; j++) if (j != i) x[i] -= a[i][j] * x[j];
            x[i] /= a[i][i];
        }
        diff = 0;
        for (i = 0; i < 3; i++) diff += fabs(x[i] - x_old[i]);
    } while (diff > err);
    printf("Solutions: x=%.4f y=%.4f z=%.4f\n", x[0], x[1], x[2]);
    return 0;
}
