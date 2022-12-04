#include <stdio.h>

int main()
{
    int evenNumberCount = 0, oddNumbersCount = 0;

    for (int currentNumber = 1; currentNumber <= 10; currentNumber++)
    {
        if (currentNumber % 2 == 0)
            evenNumberCount++;
        else
            oddNumbersCount++;
    }

    printf("W zakresie od 1 do 10 jest:\nliczb nieparzystych: %d,\nliczb parzystych: %d\n", oddNumbersCount, evenNumberCount);

    return 0;
}