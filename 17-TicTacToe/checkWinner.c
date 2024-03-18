#include <stdbool.h>
int checkWinner(short table[3][3], short player)
{
    // Horizontal and vertical conditions
    for (int i = 0; i < 3; i++)
    {
        short condX = 0;
        short condY = 0;
        for (int j = 0; j < 3; j++)
        {
            if ((table[i][j] == player))
                condX++;
            if ((table[j][i] == player))
                condY++;
        }
        if (condX == 3 || condY == 3)
        {
            return true;
        }
    }

    //  Diagonal condidions
    short diagonalCond[2][3][2] = {{
                                       {0, 0},
                                       {1, 1},
                                       {2, 2},
                                   },
                                   {{0, 2},
                                    {1, 1},
                                    {2, 0}}};

    for (int i = 0; i < 2; i++)
    {
        short cond = 0;
        for (int j = 0; j < 3; j++)
        {
            if (table[diagonalCond[i][j][0]][diagonalCond[i][j][1]] == player)
                cond++;
        }
        if (cond == 3)
        {
            return true;
        }
    }
    return 0;
}