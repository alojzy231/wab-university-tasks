#include <stdio.h>

int main(void)
{
    int counter = 0;

    for (int currentNumber = 1; currentNumber <= 100; currentNumber++)
    {
        if (currentNumber > 3)
        {
            counter++;
        }
    }

    printf("Liczb z zakresu od 1 do 100, większych od 3 jest: %d\n", counter);

    return 0;
}
