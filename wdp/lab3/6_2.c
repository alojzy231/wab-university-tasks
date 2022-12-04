#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maximum(double tab[], int size)
{
    int maxValueIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (tab[maxValueIndex] < tab[i])
            maxValueIndex = i;
    }

    return maxValueIndex;
}

int main()
{
    int tabSize = 10;
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

    int max = maximum(tab, tabSize);

    printf("Maksymalna wartosc jest w elemencie o indeksie: %d, ta wartosc wynosi: %f\n", max, tab[max]);

    return 0;
}