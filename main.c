#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, i, j, k;
    double maind = 0, dopd = 0;
    
    printf("Введите размер матрицы:\n");
    scanf("%d", &a);
    double x[a][a], y[a][a];
    
    printf("Введите элементы матрицы:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf("%lf", &x[i][j]);
            if (i == j)
            {
                maind = maind + x[i][j];
            }
            if (a == i + j + 1)
            {
                dopd = dopd + x[i][j];
            }
        }
    }
    
    printf("\nВаша матрица:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%lf ", x[i][j]);
        }
        printf("\n");
    }
    printf("Сумма элементов главной диагонали: %lf, сумма элементов доп диагонали: %lf\n", maind, dopd);
    
    {
        int n, i, j, k;
        printf("Введите размер матрицы n x n: ");
        scanf("%d", &n);

        int A[n][n], B[n][n];
        printf("Введите элементы матрицы:\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        // квадрат матрицы
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                B[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    B[i][j] += A[i][k] * A[k][j];
                }
            }
        }

        // Print the square of the matrix
        printf("квадрат матрицы равен:\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
    
    return 0;
}
