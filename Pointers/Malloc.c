#include <stdio.h>
#include <stdlib.h>

void printArray(int array[10][10], int x, int y)

{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
}

int **array(int x, int y)
{
    int **p = malloc(sizeof(int) * x);
    for (int i = 0; i < x; i++)
    {
        p[i] = malloc(sizeof(int) * y);
        for (int j = 0; j < y; j++)
        {
            p[i][j] = 10;
        }
    }

    return p;
}
int main()
{
    int **value;
    int x = 10;
    int y = 10;
    value = array(x, y);
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < y; j++)
        {
            printf("%d\n", value[i][j]);
        }
    }
    // printArray(*value, 10, 10);
    printf("Pointer: %d", value[0][0]);

    return 0;
}