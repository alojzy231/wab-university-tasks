#include <stdio.h>
#include <string.h>

#define MAX 20

int main(int argc, char *argv[])
{
    int i;
    char password[MAX];
    char pattern[] = "TajneHaslo123!";
    int attempt = 3;

    while (attempt > 0)
    {
        printf("Podaj haslo: \n");
        gets(password);

        if (strcmp(password, pattern) == 0)
        {
            printf("Haslo poprawne\n");
            return 0;
        }
        else
        {
            printf("Haslo bledne, pozostalo prob: %d\n", --attempt);
        }
    }

    printf("Haslo bledne, brak prob\n");
    return 1;
}
