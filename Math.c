#include <stdio.h>
#include <math.h>
int main()
{
    float radius;
    float circ;
    float area;
    const double PI = 3.14159;

    scanf("%f", &radius);

    circ = (double)2 * PI * radius;
    area = PI * pow(radius, 2);
    printf("The circumference of a circle with the radius %f is %f, and the area is %lf", radius, circ, area);
    return 0;
}