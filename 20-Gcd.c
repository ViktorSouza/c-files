#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b)
{
    while (b > 0)
    {
        int r = a % b;
        a, b = b, r;
        system("cls");
        printf("a:%d\nb:%d\n", a, b);
    }
    return a;
}
int main()
{
    printf("remainder: %d", gcd(144, 12));
    // printf("%d", 144 % 12);

    return 0;
}