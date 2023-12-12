#include <stdio.h>

void print_ascii_codes(FILE *file);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uzycie: %s <nazwa_pliku>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL)
    {
        printf("Blad otwarcia pliku %s\n", argv[1]);
        return 1;
    }

    printf("Znak\tKod dziesietny\tKod szesnastkowy\n");

    int c;

    while ((c = fgetc(file)) != EOF)
    {
        if (c >= 0 && c <= 127)
        {
            if (c == 0)
            {
                printf("NUL");
            }
            else if (c == 3)
            {
                printf("ETX");
            }
            else if (c == 4)
            {
                printf("EOT");
            }
            else if (c == 8)
            {
                printf("BSP");
            }
            else if (c == 9)
            {
                printf("HT");
            }
            else if (c == 10)
            {
                printf("LF");
            }
            else if (c == 12)
            {
                printf("FF");
            }
            else if (c == 13)
            {
                printf("CR");
            }
            else if (c == 26)
            {
                printf("EOF");
            }
            else if (c == 27)
            {
                printf("ESC");
            }
            else
            {
                printf("%c", c);
            }
        }
        else
        {
            printf("<U+%X>", c);
        }

        printf("\t%d\t\t%X\n", c, c);
    }

    fclose(file);

    return 0;
}
