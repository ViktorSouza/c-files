#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int age = 21;
    char grade = 'C';
    bool isStudentAdult = age > 18;
    char text[] = "Your grade is about %c, however, you are just %d years old\n";

    char num = 127; //[-128, 127]

    // printf("%c\n", num);
    // printf("%d\n", num);

    // printf(text, grade, age);
    // printf("The student is adult? %s", isStudentAdult);
    // long long int bah = 2234999999999;
    float bah = 3.14159265359;
    int x = 5;
    int y = 2;
    float z = x / (float)y;
    printf("%d", (int)z);

    printf("%8.2f", bah);
    return 0;
}