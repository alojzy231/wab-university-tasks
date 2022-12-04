// 1-0, 48-57
// a-z, 97-122
// A-Z, 65-90

#include <stdio.h>

void printEncryptedChar(char c, int minValue, int maxValue)
{
    char newC = c + 1;

    if (c >= minValue && c <= maxValue)
    {
        if (newC > maxValue)
            newC -= maxValue - minValue + 1;

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
        // printf(" znak: %c kod: %d\n", c, c);

        if (c == 27)
            break;
        if (c == 32)
            printf(" ");

        printEncryptedChar(c, 48, 57);  // numbers
        printEncryptedChar(c, 65, 90);  // uppercase
        printEncryptedChar(c, 97, 122); // lowercase
    }
    return 0;
}
