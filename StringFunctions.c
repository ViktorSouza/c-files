#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    for (int i = 1; i < 10; i++)
    {

        for (int j = 1; j <= pow(i, 2); j++)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}