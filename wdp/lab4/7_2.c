#include <stdio.h>

int dlug_napis(char text[])
{
    int length = 0;

    while (text[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    printf("%d", dlug_napis("Dlugi napis"));

    return 0;
}