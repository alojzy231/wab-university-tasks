#include <stdio.h>

void printEncryptedChar(char c, int key, int minValue, int maxValue)
{
    char newC = c + key;

    if (c >= minValue && c <= maxValue)
    {
        if (newC > maxValue)
            newC -= maxValue - minValue + 1;
        else if (newC < minValue)
            newC += maxValue - minValue + 1;

        printf("%c", newC);
    }
}

int main()
{
    char c;
    int key;

    printf("Wprowadz wartosc klucza: ");
    scanf("%d", &key);
    getchar();
    printf("Zdanie jakie chcesz zakodowac: ");

    while (1)
    {
        c = getchar();

        if (c == 27)
            break;
        if (c == 32)
            printf(" ");

        printEncryptedChar(c, key, 48, 57);  // numbers
        printEncryptedChar(c, key, 65, 90);  // uppercase
        printEncryptedChar(c, key, 97, 122); // lowercase
    }

    printf("Wprowadz wartosc klucza: ");
    scanf("%d", &key);
    getchar();
    printf("Zdanie jakie chcesz odkodowac: ");

    while (1)
    {
        c = getchar();

        if (c == 27)
            break;
        if (c == 32)
            printf(" ");

        printEncryptedChar(c, -key, 48, 57);  // numbers
        printEncryptedChar(c, -key, 65, 90);  // uppercase
        printEncryptedChar(c, -key, 97, 122); // lowercase
    }

    return 0;
}
