#include <stdio.h>

int main(int argc, char *argv[])
{
    int liczba, iloraz, dzielnik, ileCyfr = 0;
    int wynik[32]; // Tablica na wynik
    printf("Podaj liczbe dziesietna:");
    scanf("%d", &liczba);

    iloraz = liczba;

    // konwersja na binarne
    while (iloraz != 0)
    {
        wynik[ileCyfr++] = iloraz % 2;

        iloraz /= 2;
    }

    printf("bin: ");
    for (int index = ileCyfr - 1; index >= 0; index--)
    {
        printf("%d", wynik[index]);
    }
    printf("\n");

    // konwersja na osemkowe
    int wynikWOsemkowym[32];
    ileCyfr = 0;
    iloraz = liczba;

    while (iloraz != 0)
    {
        wynikWOsemkowym[ileCyfr++] = iloraz % 8;

        iloraz /= 8;
    }

    printf("oct: 0");
    for (int index = ileCyfr - 1; index >= 0; index--)
    {
        printf("%d", wynikWOsemkowym[index]);
    }
    printf("\n");

    // konwersja na szesnastkowe
    char wynikWSzesnastkowym[32];
    ileCyfr = 0;
    iloraz = liczba;

    while (iloraz != 0)
    {
        int reszta = iloraz % 16;

        if (reszta < 10)
        {
            wynikWSzesnastkowym[ileCyfr++] = 48 + reszta;
        }
        else
        {
            wynikWSzesnastkowym[ileCyfr++] = 55 + reszta;
        }

        iloraz /= 16;
    }

    printf("hex: 0x");
    for (int index = ileCyfr - 1; index >= 0; index--)
    {
        printf("%c", wynikWSzesnastkowym[index]);
    }
    printf("\n");

    return 0;
}