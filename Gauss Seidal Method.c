#include <stdio.h>
#include <math.h>

void main() {
    int i, j, k, n = 3, maxIteration = 100;
    float a[3][4] = {
        {4, -1, 1, 7},
        {2, 5, 2, -8},
        {1, 2, 4, 6}
    };
    float x[3] = {0, 0, 0}, old[3];
    float eps = 0.001, sum, error;

    for (k = 0; k < maxIteration; k++) {
        for (i = 0; i < n; i++) old[i] = x[i];

        for (i = 0; i < n; i++) {
            sum = a[i][n];
            for (j = 0; j < n; j++) {
                if (j != i) sum -= a[i][j] * x[j];
            }
            x[i] = sum / a[i][i];
        }

        error = 0;
        for (i = 0; i < n; i++) {
            if (fabs(x[i] - old[i]) > error)
                error = fabs(x[i] - old[i]);
        }
        if (error < eps) break;
    }

    printf("Solution:\n");
    for (i = 0; i < n; i++)
        printf("x[%d] = %.4f\n", i + 1, x[i]);

}

