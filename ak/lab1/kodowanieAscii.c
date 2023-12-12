#include <stdio.h>

int main()
{
    printf("Znak\tKod dziesietny\tKod szesnastkowy\n");

    for (int i = 0; i <= 127; i++)
    {
        if (i == 0)
        {
            printf("NUL");
        }
        else if (i == 3)
        {
            printf("ETX");
        }
        else if (i == 4)
        {
            printf("EOT");
        }
        else if (i == 8)
        {
            printf("BSP");
        }
        else if (i == 9)
        {
            printf("HT");
        }
        else if (i == 10)
        {
            printf("LF");
        }
        else if (i == 12)
        {
            printf("FF");
        }
        else if (i == 13)
        {
            printf("CR");
        }
        else if (i == 26)
        {
            printf("EOF");
        }
        else if (i == 27)
        {
            printf("ESC");
        }
        else
        {
            printf("%c", i);
        }

        printf("\t%d\t\t%X\n", i, i);
    }

    return 0;
}