#include <stdio.h>

int main()
{
    for (int row = 0; row < 10; row++)
    {
        for (int column = 0; column <= row; column++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
