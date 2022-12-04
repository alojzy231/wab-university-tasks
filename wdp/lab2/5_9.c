#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            int sum = i + j;

            if (sum == 0)
            {
                printf("  ");
            }
            else
            {
                if (sum < 10)
                    printf(" ");

                printf("%d", sum);
            }

            printf("  ");
        }
        printf("\n");
    }

    return 0;
}