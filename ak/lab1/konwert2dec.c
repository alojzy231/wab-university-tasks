#include <stdio.h>

int binToDec(int binary)
{
    int decimal = 0;
    int base = 1;

    while (binary > 0)
    {
        int digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main()
{
    int liczba; // Liczba na wynik

    printf("Podaj liczbe binarna: ");
    scanf("%d", &liczba);

    int decimal = binToDec(liczba);

    printf("dec: %d oct:0%o hex: 0x%x\n", decimal, decimal, decimal);
    return 0;
}
