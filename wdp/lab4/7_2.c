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
    char text[20];

    printf("Podaj napis: ");
    gets(text);

    printf("Napis ma długość: %d\n", dlug_napis(text));

    return 0;
}