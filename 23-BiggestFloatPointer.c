#include <stdio.h>

float *biggestFloat(float *a, float *b)
{
    if (*a > *b)
        return a;
    else
        return b;
}

int main()
{
    float a = 0.5;
    float b = 0.3;
    printf("A address:%p\n", &a);
    printf("B address: %p\n ", &b);
    printf("biggest float address:%p\n", biggestFloat(&a, &b));
    return 0;
}
