#include <stdio.h>

int main()
{
    int sum = 0, numbersCount = 0;

    for (int currentNumber = 1; currentNumber <= 10; currentNumber++)
    {
        sum += currentNumber * currentNumber;
        numbersCount++;
    }

    printf("Srednia kwadratow liczb calkowitych od 1 do 10 wynosi: %f\n", (float)sum / numbersCount);

    return 0;
}