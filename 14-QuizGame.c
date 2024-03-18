#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n_questions = 2;
    char questions[2][100] = {"When did WW2 starts", "What is the biggest country?"};
    char options[2][3][100] = {{"1945", "1939", "1933"}, {"Russia", "Brazil", "USA"}};
    char answers[2][100] = {"1939", "Russia"};
    for (int i = 0; i < n_questions; i++)
    {
        char answer[100];
        do
        {
            printf("\n%s:\n", questions[i]);
            for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
                printf("%d- %s\n", j + 1, options[i][j]);

            fgets(answer, 100, stdin);
            answer[strcspn(answer, "\n")] = 0;
            if (strcmp(answer, answers[i]) == 0)
                printf("You\'re correct!\n");
            else
                printf("You\'re wrong!\n");

        } while (strcmp(answer, answers[i]) != 0);
    };
    return 0;
}
