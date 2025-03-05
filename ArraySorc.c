#include <stdio.h>
#include <math.h>
#include <string.h>
// #include "10-ArraySort.h"
void sort(char[], int);
void printArray(int, char[]);
int main()
{
    // char array[] = {'H', 'e', 'l', 'l', 'o', '!'};
    char array[] = {'v', 'i', 't', 'o', 'r'};
    // int array[] = {12, 1, 3, 23, 109123, 4, 0, -1, -10, 0, 10, 10, 123123};
    int array_size = sizeof(array) / sizeof(array[0]);
    sort(array, array_size);

    printArray(array_size, array);
    return 0;
}

void printArray(int array_size, char array[])
{
    for (int i = 0; i < array_size; i++)
        printf("%c, ", array[i]);
}
void sort(char array[], int array_size)
{
    int n = 0;
    printf("Array size: %lu\n", array_size);
    for (int i = 0; i < array_size; i++)
        for (int j = 0; j < array_size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            n++;
        }
    printf("The loop ran %d times\n", n);
}