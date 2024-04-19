#include <stdio.h>
#include <stdlib.h>

#define MATRIX1_ROWS 4
#define MATRIX1_COLS 4

#define MATRIX2_ROWS 4
#define MATRIX2_COLS 10

void printMatrix(int **array, int col, int row);
int colRowSum(int **m1, int **m2, int row, int column);
int **generateArray(int rows, int cols);
int **matrixMultiplication(int **m1, int **m2);

void main()

{
    int **matrix1 = generateArray(MATRIX1_ROWS, MATRIX1_COLS);
    int **matrix2 = generateArray(MATRIX2_ROWS, MATRIX2_COLS);
    int **result = matrixMultiplication(matrix1, matrix2);
    printf("Matrix 1:\n");
    printMatrix(matrix1, MATRIX1_ROWS, MATRIX1_COLS);
    printf("Matrix 2:\n");
    printMatrix(matrix2, MATRIX2_ROWS, MATRIX2_COLS);
    printf("Result:\n");
    printMatrix(result, MATRIX1_ROWS, MATRIX2_COLS);
}

int **matrixMultiplication(int **m1, int **m2)
{
    int **resultMatrix = generateArray(MATRIX1_ROWS, MATRIX2_COLS);
    for (int i = 0; i < MATRIX1_ROWS; i++)
    {
        for (int j = 0; j < MATRIX2_COLS; j++)
        {
            resultMatrix[i][j] = colRowSum(m1, m2, i, j);
        }
    }
    return resultMatrix;
}

int colRowSum(int **m1, int **m2, int row, int column)
{
    int result = 0;
    for (char i = 0; i < MATRIX1_COLS; i++)
    {
        printf("sum result: %d\n", result);
        printf("i: %d\n", i);
        printf("row: %d\n", row);
        printf("col: %d\n", column);

        result = result + m1[row][i] * m2[i][column];
    }
    return result;
}

int **generateArray(int x, int y)
{
    int **p = malloc(sizeof(int) * x);
    for (int i = 0; i < x; i++)
    {
        p[i] = malloc(sizeof(int) * y);
        for (int j = 0; j < y; j++)
        {
            p[i][j] = 0;
        }
    }

    return p;
}

void printMatrix(int **array, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
