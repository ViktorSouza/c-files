#include <stdio.h>
enum Score
{
    FAILED,
    BAD,
    AVERAGE,
    GOOD,
    GREAT
};
typedef struct
{
    char name[16];
    char score;
} User;
int main()
{
    User user = {"Viktor", 3};

    if (user.score < AVERAGE)
        printf(":(");
    else if (user.score == AVERAGE)
        printf(":|");
    else
        printf(":)");

    return 0;
}