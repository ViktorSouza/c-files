#include <stdio.h>
void printTable(short table[3][3])
{
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            char letter;
            switch (table[i][j])
            {
            case 0:
                letter = 'O';
                break;
            case 1:
                letter = 'X';
                break;
            case -1:
                letter = ' ';
                break;
            }
            switch (j)
            {
            case 0:
                printf("%c |", letter);
                // printf("%c", letter);
                break;
            case 1:
                printf(" %c ", letter);
                // printf("%c", letter);
                break;
            case 2:
                printf("| %c\n", letter);
                // printf("%c\n", letter);
                break;
            }
        }

        if (i != 2)
            printf("---------\n");
    }
}