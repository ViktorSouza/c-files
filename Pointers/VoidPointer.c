#include <stdio.h>
#include <stdlib.h>

void setToZero(int num)
{
    num = 0;
}
int getElementXY(int **array, int x, int y)
{
    return array[x][y];
}

int main()
{
    int x = 100;
    setToZero(x);
    int **array = malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
    {
        array[i] = malloc(3 * sizeof(int));
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = i * 3 + 1 + j;
        }
    }

    printf("%d", getElementXY(array, 2, 0));
}
