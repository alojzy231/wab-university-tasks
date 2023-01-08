#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 4

int main(int argc, char *argv[])
{
    int i;
    int op1, op2, result;
    char *operation[MAX] = {"plus", "minus", "razy", "podziel"};
    char message[50];

    if (argc != 4)
    {
        printf("Nieprawidlowa liczba argumentow: %d\n", argc);
        return 1;
    }

    op1 = atoi(argv[1]);
    op2 = atoi(argv[3]);

    for (i = 0; i < MAX; i++)
    {
        if (strcmp(argv[2], operation[i]) == 0)
        {
            break;
        }
    }

    switch (i)
    {
    case 0:
        result = op1 + op2;
        break;
    case 1:
        result = op1 - op2;
        break;
    case 2:
        result = op1 * op2;
        break;
    case 3:
        result = op1 / op2;
        break;
    default:
        printf("Nieznana operacja: %s\n", argv[2]);
        return 1;
    }

    printf("%d %s %d = %d\n", op1, operation[i], op2, result);

    return 0;
}
