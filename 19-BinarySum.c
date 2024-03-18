#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int binSize = 16;

// const int bitSize = 8;
void binSum(char *n1, char *n2)
{
    char re[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    char rs[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 8 - 1; i > 0; i--)
    {
        int a = n1[i];
        int b = n2[i];
        int c = re[i];

        re[i - 1] = ((a | b) & c) | ((b | c) & a);

        // TODO make ony bitwise to test if only one bit is set to one
        rs[i] = (a ^ b) ^ c;
        printf("********Calculation: %d\n", 7 - i);
        printf("Value: %d\n", rs[i]);
        printf("Carry on: %d\n", re[i - 1]);
    }
    for (int i = 0; i < sizeof(n1) / sizeof(n1[0]); i++)
        printf("%d", rs[i]);
}

int binary(int decimal)

{
    char values[binSize];
    for (char i = 0; i < sizeof(values) / sizeof(values[0]); i++)
    {
        values[i] = 0;
    }
    for (int i = 0; decimal > 0; i++)
    {
        values[binSize - 1 - i] = decimal % 2;
        decimal = decimal / 2;
    }
    long long int result = 0;
    for (int i = 0; i < binSize; i++)
    {
        result += pow(10, i) * values[binSize - 1 - i];
    }
    if (decimal < 0)
    {
        for (int i = 0; i < binSize; i++)
        {
            values[binSize - 1 - i] -= 1;
        }
        // binSum(values);
    }

    return result;
}
int main()
{
    //          128 64 32 16  8  4  2  1
    char n1[8] = {0, 0, 1, 1, 0, 1, 1, 0};
    char n2[8] = {0, 0, 0, 0, 0, 1, 1, 1};
    binSum(n1, n2);
    // int a = 0;
    // int b = 1;
    // int c = 1;
}