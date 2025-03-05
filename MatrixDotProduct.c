#include <stdio.h>
int matrix1[3][3] = {{1, 2, 3}, {3, 2, 1}, {1, 3, 1}};
int matrix2[3][3] = {{1, 2, 3},
                     {3, 3, 1},
                     {7, 5, 3}};

int matrixProduct(int m1[3][3], int m2[3][3])
{
    long long int result = 0;
    for (char i = 0; i < 3; i++)
    {
        for (char j = 0; j < 3; j++)
        {
            printf("%d ", m1[i][j]);
            result = result + m1[i][j] * m2[i][j];
        }
        printf("\n");
    }
    return result;
}

void main()
{

    printf("result:%d", matrixProduct(matrix1, matrix2));
}