#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int main()

{
    srand(time(0));
    int number = rand() % 20;
    int rounds = 0;
    int guess;
    printf("Type a number!\n");
    do
    {
        scanf("%d", &guess);
        if (guess < number)
            printf("Choose a higher number!\n");
        if (guess > number)
            printf("Choose a lower number!\n");
        rounds++;
    } while (guess != number);
    printf("You\'re correct! You got the correct answer (%d) after %d tries!", number, rounds);
    return 0;
}