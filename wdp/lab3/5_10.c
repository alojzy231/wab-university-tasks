#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            int multiplication = i * j;

            if (multiplication == 0)
            {
                printf("   ");
            }
            else
            {
                if (multiplication < 10)
                {
                    printf("  ");
                }
                else if (multiplication < 100)
                {
                    printf(" ");
                }

                printf("%d", multiplication);
            }

            printf("   ");
        }
        printf("\n");
    }

    return 0;
}