#include <stdio.h>
#include <ctype.h>

int main()
{
    int c, lowerCharsCount = 0, upperCharsCount = 0, numbersCount = 0, spaceCount = 0, specialCharsCount = 0;

    while ((c = getchar()) != EOF)
    {
        if (islower((int)c))
        {
            lowerCharsCount++;
        }
        else if (isupper((int)c))
        {
            upperCharsCount++;
        }
        else if (isdigit((int)c))
        {
            upperCharsCount++;
        }
        else if (isspace((int)c))
        {
            spaceCount++;
        }
        else if (isspecial((int)c))
        {
            specialCharsCount++;
        }
    }

    printf("W tym tekscie jest:\nmalych liter: %d\nduzych liter: %d\ncyfr: %d\nspacji: %d\nznakow specjalnych: %d\n", lowerCharsCount, upperCharsCount, numbersCount, spaceCount, specialCharsCount);

    return 0;
}