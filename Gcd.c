#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b)
{
    while (b > 0)
    {
        int r = a % b;
        int temp = b;
        a = temp;
        b = r;
    }
    return a;
}
int main()
{
    printf("remainder: %d", gcd(320048, 4102384));
    // printf("%d", 144 % 12);

    return 0;
}