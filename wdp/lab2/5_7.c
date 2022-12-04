#include <stdio.h>
#include <ctype.h>

int main()
{
    int c, lowerCharsCount = 0, upperCharsCount = 0, digitCounts = 0, spaceCount = 0, specialCharsCount = 0;

    while ((c = getchar()) != EOF)
    {
        if (isdigit((int)c))
        {
            digitCounts++;
        }
        else if (isspecial((int)c))
        {
            specialCharsCount++;
        }
        else if (islower((int)c))
        {
            lowerCharsCount++;
        }
        else if (isupper((int)c))
        {
            upperCharsCount++;
        }
        else if (isspace((int)c))
        {
            spaceCount++;
        }
    }

    printf("\nW tym tekscie jest:\nmalych liter: %d\nduzych liter: %d\ncyfr: %d\nspacji: %d\nznakow specjalnych: %d\n", lowerCharsCount, upperCharsCount, digitCounts, spaceCount, specialCharsCount);

    return 0;
}