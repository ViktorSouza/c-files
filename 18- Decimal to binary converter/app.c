#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void printArray(char array[], int arrayLength)
{
    bool isNumberStarted = false;
    for (int i = 0; i < arrayLength; i++)
    {
        // if (array[i] == 1 && !isNumberStarted)
        //     isNumberStarted = true;
        // if (isNumberStarted)
        printf("%c", array[i]);
    }
}

int main()
{

    long long int decimal = 4095;
    // printf("What number do you want to convert?\n");

    // scanf("%s", &decimal);
    // decimal[strlen(decimal) - 1] = "\0";
    // printf("%s", decimal);

    char binary[8 * 4];
    for (int i = 0; i < sizeof(binary) / sizeof(binary[0]); i++)
    {
        binary[i] = '0';
    }
    for (char i = 0; decimal > 0; i++)
    {
        int base = 16;
        char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        int binarySize = sizeof(binary) / sizeof(binary[0]);
        binary[binarySize - 1 - i] = numbers[decimal % base];
        decimal = decimal / base;
        // printf("%d\n", number);
        // printf("%d", binary[8 - 1 - i]);
    }

    printArray(binary, sizeof(binary) / sizeof(binary[0]));

    return 0;
}