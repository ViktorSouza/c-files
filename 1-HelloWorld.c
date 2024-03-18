#include <stdio.h>

int main()
{
    int num;

    while (num < 100)
    {
        if (num % 2 == 1)
        {
            printf("Hello\n");
        }
        else
        {
            printf("World!\n");
        }
        num++;
    }
    return 0;
}