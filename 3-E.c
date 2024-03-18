#include <stdio.h>
#include <math.h>

void Elim(int loop)
{
    long double x = 1;

    while (x <= loop)
    {
        x += 1;
    }
    printf("%.32lf\n", pow(1 + 1 / x, x));
}

long long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int acc = n;
    int value = n;
    while (value > 1)
    {
        value -= 1;
        acc *= (value);
    }
    return acc;
}

void Esum(int loop)
{
    double value = 0;
    int n = 0;
    while (n <= loop)
    {
        value += 1 / (long double)factorial(n);
        // printf("%.3d,%d\n", n, factorial(n));
        n += 1;
    }
    printf("%.32lf\n", value);
}

int main()
{
    Esum(30);
    Elim(1000000);
    printf("%.32lf", 2.71828182845904523536028747135266249);
    return 0;
}