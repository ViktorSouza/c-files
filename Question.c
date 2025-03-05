#include <stdio.h>
#include <string.h>
#include <datetimeapi.h>

int main()
{
    // printf("%d", name);
    int age;
    char name[26];
    printf("What is your name?");
    fgets(name, 26, stdin);
    printf("How old are you?\n");
    scanf("%d", &age);
    printf(name);
    name[strlen(name) - 1] = "\0";
    printf("Hi, %s!, You are %d years far away from 60 years old!", name, 60 - age);

    return 0;
}