#include <stdio.h>

int main()
{
    int multiplicationTable[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            multiplicationTable[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (multiplicationTable[i][j] < 10)
            {
                printf("  ");
            }
            else if (multiplicationTable[i][j] < 100)
            {
                printf(" ");
            }

            printf(" %d", multiplicationTable[i][j]);
        }

        printf("   \n");
    }

    return 0;
}