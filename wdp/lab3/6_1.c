#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tabSize = 10, maxValueIndex = 0;
    double tab[tabSize];

    srand(time(NULL));

    for (int i = 0; i < tabSize; i++)
    {
        tab[i] = (rand() / (RAND_MAX + 1.0));
    }

    for (int i = 0; i < tabSize; i++)
    {
        printf("%f, \n", tab[i]);
    }

    for (int i = 1; i < tabSize; i++)
    {
        if (tab[maxValueIndex] < tab[i])
            maxValueIndex = i;
    }
    printf("Maksymalna wartosc jest w elemencie o indeksie: %d, ta wartosc wynosi: %f\n", maxValueIndex, tab[maxValueIndex]);

    return 0;
}