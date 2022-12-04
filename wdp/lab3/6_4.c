#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tabSize = 10;
    double tab[tabSize];

    srand(time(NULL));

    for (int i = 0; i < tabSize; i++)
    {
        tab[i] = (rand() / (RAND_MAX + 1.0));
    }

    printf("Nieposortowana tablica:\n");
    for (int i = 0; i < tabSize; i++)
    {
        printf("%f \n", tab[i]);
    }

    int lastIndex = tabSize;
    do
    {
        for (int i = 0; i < lastIndex - 1; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                double temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                printf("Zamiana na indeksach %d -> %d\n", i, i + 1);
            }
        }

        lastIndex--;
    } while (lastIndex != 0);

    printf("Posortowana tablica:\n");
    for (int i = 0; i < tabSize; i++)
    {
        printf("%f \n", tab[i]);
    }

    return 0;
}