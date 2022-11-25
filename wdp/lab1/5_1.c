// Oblicza kolejne wyrazy ciagu fibonnaciego

#include <stdio.h>
int main()
{
    int stepsNumber, firstFibNumber = 0, secondFibNumber = 1;

    printf("Ciag fibonnaciego\nLiczba krokow: ");
    scanf("%d", &stepsNumber);

    printf("1 wyrazem ciagu fibonacciego jest liczba: %d\n", firstFibNumber);

    if (stepsNumber > 1)
    {
        printf("2 wyrazem ciagu fibonacciego jest liczba: %d\n", secondFibNumber);

        for (int currentStepNumber = 3; currentStepNumber <= stepsNumber; currentStepNumber++)
        {
            int currentFibNumber = firstFibNumber + secondFibNumber;

            printf("%d wyrazem ciagu fibonacciego jest liczba: %d\n", currentStepNumber, currentFibNumber);

            firstFibNumber = secondFibNumber;
            secondFibNumber = currentFibNumber;
        }
    }

    getchar();
    return 0;
}