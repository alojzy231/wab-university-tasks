#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define N 100

int main()
{
    char napis[N];
    int ls = 0;
    int t = 0;

    printf("Podaj napis: ");
    gets(napis);
    printf("%s\n", napis);

    for (int i = 0; i < N; i++)
    {
        char c = napis[i];

        if (c == '\0')
        {
            break;
        }
        else
        {
            printf("%d\t%c", i, c);

            if (isalnum(c) && t == 0)
            {
                t = 1;
                ls++;

                printf("\tnowe slowo %d %d", t, ls);
            }
            else if (!isalnum(c))
            {
                t = 0;

                printf("\tkoniec slowa %d %d", t, ls);
            }

            printf("\n");
        }
    }

    printf("\nW tekscie jest slow: %d\n", ls);

    return 0;
}