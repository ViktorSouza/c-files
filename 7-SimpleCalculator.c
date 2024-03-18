#include <stdio.h>

int main()
{
    double num1, num2;
    char operator;
    printf("\nType the operator");
    scanf("%c", &operator);

    printf("\nType the number one");
    scanf("%lf", &num1);

    printf("\nType the number two");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        printf("%lf + %lf = %lf", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%lf - %lf = %lf", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%lf * %lf = %lf", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%lf / %lf = %lf", num1, num2, num1 / num2);
        break;
    default:
        prinft("Please, type a valid operator");
        break;
    }
    return 0;
}