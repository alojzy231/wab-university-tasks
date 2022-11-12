#include <stdio.h>

int fibonacciSequence(int currentStep)
{
    if (currentStep <= 1)
    {
        return currentStep;
    }

    return fibonacciSequence(currentStep - 1) + fibonacciSequence(currentStep - 2);
}

int main()
{
    int stepsNumber;

    printf("Ciag fibonnaciego\nLiczba krokow: ");
    scanf("%d", &stepsNumber);

    printf("%d wyrazem ciagu fibonacciego jest liczba: %d\n", stepsNumber + 1, fibonacciSequence(stepsNumber));

    getchar();
    return 0;
}