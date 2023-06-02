// FUNCS
#include <stdio.h>
#include <stdlib.h>

double **newMatrix(int n)
{
int i;
double **matrix = malloc(n * sizeof(double *));
for (i = 0; i < n; i++)
    {
        matrix[i] = malloc(n * sizeof(double));
    }
return matrix;
}


void fillMatrix(double **matrix, int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
scanf("%lf", &matrix[i][j]);
}
}
}

void printMatrix(double **matrix, int n)
{
int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

double **plusMatrix(double **matrix1, double **matrix2, int n)
{
int i, j;
double **result = newMatrix(n);
for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
return result;
}

double **minusMatrix(double **matrix1, double **matrix2, int n)
{
int i, j;
double **result = newMatrix(n);
for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
return result;
}

double **xMatrix(double **matrix1, double **matrix2, int n)
{
int i, j, k;
double **result = newMatrix(n);
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
double sum = 0;
for (k = 0; k < n; k++)
{
sum += matrix1[i][k] * matrix2[k][j];
}
result[i][j] = sum;
}
}
return result;
}

// MAIN
#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int main() {
    int n, i;
    printf("введите размер матрицы: ");
    scanf("%d", &n);
    double **matrix1 = newMatrix(n);
    double **matrix2 = newMatrix(n);
    printf("введите элементы первой матрицы :\n");
    fillMatrix(matrix1, n);
    printf("введите элементы второй матрицы:\n");
    fillMatrix(matrix2, n);
    printf("введите знак (+, -, *): ");
    char operation;
    scanf(" %c", &operation);

    double **result;
    switch (operation) {
        case '+':
            result = plusMatrix(matrix1, matrix2, n);
            break;
        case '-':
            result = minusMatrix(matrix1, matrix2, n);
            break;
        case '*':
            result = xMatrix(matrix1, matrix2, n);
            break;
        default:
            printf("error\n");
            return 1;
    }

    printf("результат:\n");
    printMatrix(result, n);

    for (i = 0; i < n; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
