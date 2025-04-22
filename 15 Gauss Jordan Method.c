// C program for Gauss Jordan Method
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i, j, k, p, q;
    float pivot, term, a[10][10];

    printf("Enter Dimension of System of equations\n");
    scanf("%d", &n);

    printf("Enter  coefficients Augmented Matrix\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n + 1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    // Elimination Process
    for(k = 0; k < n; k++)
    {
        pivot = a[k][k];
        
        // Normalization: make pivot = 1
        for(p = 0; p < n + 1; p++)
        {
            a[k][p] = a[k][p] / pivot;
        }

        // Make other column elements 0
        for(i = 0; i < n; i++)
        {
            term = a[i][k];
            if(i != k)
            {
                for(j = 0; j < n + 1; j++)
                {
                    a[i][j] = a[i][j] - a[k][j] * term;
                }
            }
        }
    }

    // Display Solution
    printf("Solution:\n");
    for(i = 0; i < n; i++)
    {
        printf("x[%d] = %f\n", i + 1, a[i][n]);
    }

    getch();
    return 0;
}

