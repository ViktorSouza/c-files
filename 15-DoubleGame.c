#include <stdio.h>
#include <math.h>
int main()
{
    int number = 2;
    int guess;
    int tries = 0;
    do
    {
        printf("What is the next double of %d?\n", number / 2);
        do
        {
            scanf("%d", &guess);
            if (number == guess)
            {
                printf("You are correct!");
                number *= 2;
                break;
            }
            else
            {
                if (guess > number)
                    printf("Lower!\n");
                else
                    printf("Higher!\n");
            }
        } while (1);

    } while (number <= pow(2, 16));

    return 0;
}