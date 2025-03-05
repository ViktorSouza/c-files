#include <stdio.h>
#include <time.h>

int main()
{
    FILE *pF = fopen("file.txt", "w");
    fprintf(pF, "%d", time(NULL));
    printf("%p", pF);
    fclose(pF);
    return 0;
}