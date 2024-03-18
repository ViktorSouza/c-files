#include <stdio.h>
#include <math.h>
#include <string.h>

struct User
{
    char age;
    char name[127];
    char nationality[2];
};

int main()
{
    const int size = 5;
    struct User users[size];
    int users_size = sizeof(users) / sizeof(users[0]);
    char users_name[5][160] = {"Viktor", "Jao", "Bah meu", "Ixi", "Tonhao"};
    for (int i = 0; i < users_size; i++)
    {
        users[i].age = 18 + i;
        strcpy(users[i].nationality, "BR");
        strcpy(users[i].name, users_name[i]);
    }

    for (int i = 0; i < users_size; i++)
        printf("%s\n", users[i]);
    printf("%d\n", sizeof(users));

    return 0;
}