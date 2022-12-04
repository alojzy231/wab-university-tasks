#include <stdio.h>

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int suma_tab(int tab[], int size)
{
    int sum = tab[0];

    for (int i = 1; i < size; i++)
    {
        sum += tab[i];
    }

    return sum;
}

int main(void)
{
    printf("Suma wynosi: %d", suma_tab(a, 10));
}