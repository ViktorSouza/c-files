#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "./checkWinner.c"
#include "./printTable.c"
#include <stdlib.h>
int checkWinner(short[3][3], short);
void printTable(short table[3][3]);

enum Player
{
    O,
    X,
};

int main()
{
    bool hasWinner = false;
    short table[3][3] = {
        {-1, -1, -1},
        {-1, -1, -1},
        {-1, -1, -1}};

    printTable(table);

    int round = 0 + 1;
    do
    {
        int col;
        int row;
        char player = round % 2 == 0;

        printf("*** %d ROUND FOR %c***\n", round, player ? 'O' : 'X');

        printf("Digit the column: ");
        scanf("%d", &col);

        printf("Digit the row: ");
        scanf("%d", &row);
        // The rounds will alternate between X and O
        // Since the game uses 1 as the first index, the values will be subtrated by 1
        col -= 1;
        row -= 1;
        if (table[col][row] != -1)
        {
            printf("Please choose another one!\n");
            continue;
        }
        if (player)
            table[col][row] = 0;
        else
            table[col][row] = 1;

        printf("col: %d,row:%d\n", col, row);
        printTable(table);
        if (checkWinner(table, player))
        {
            printf("Player %c won!!!", player ? 'O' : 'X');
            break;
        }
        round++;

    } while (round < 9 + 1);
    if (!hasWinner)
        printf("Withdrawn :(");

    return 0;
}
