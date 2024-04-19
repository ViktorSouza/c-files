#include <stdio.h>
#include <stdlib.h>

int isNumPrime(int num)
{
    int result = 1;

    if (num % 2 == 0)
        result = 0;
    for (int i = 3; i < num; i += 2)
    {
        if (num % i == 0)
        {
            result = 0;
            break;
        }
    }

    return result;
}

int smallestDivisiblePrime(int num)
{

    int result = 1;
    if (num % 2 == 0)
        result = 2;

    for (int i = 3; (i <= num) && (result == 1); i += 2)
    {
        if (isNumPrime(i) && num % i == 0)
        {
            result = i;
            break;
        }
    }
    return result;
}

int productOfPrimes(int num, int *values)
{
    int i = 0;
    int value = num;

    if (isNumPrime(num))
    {
        values[i] = num;
        i++;
    }

    while (value > 2)
    {
        int smallesPrime = smallestDivisiblePrime(value);
        value = value / smallesPrime;
        values[i] = smallesPrime;
        i++;
        if (i == 100)
            break;
    }
}

int main()
{
    int size = sizeof(int) * 5;
    int *values = malloc(size);
    productOfPrimes(43095, values);
    for (int i = 0; i < size; i++)
    {
        if (values[i] == 0)
            break;
        printf("%d, ", values[i]);
    }

    return 0;
}