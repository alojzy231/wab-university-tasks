// Baza danych osob oparta na tablicy
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

typedef struct
{
    char imie[MAX];
    char nazwisko[MAX];
    int pesel;
} osoba_t;

int indeks[MAX];

// Tablica zawierajaca struktury typu osoba_t
osoba_t tab[MAX];

int lelem = 0; // aktualna liczba elementow tablicy

// pozycja na ktorej wstawic nastepny element
int koniec = 0;

// wczytuje dane osoby do struktury osoba
int wczytaj_osobe(osoba_t *osoba);

// Dodaje osobe do tablicy
int dodaj_osobe(osoba_t *osoba);

// Szuka osoby o danym pesel index kopiuje do &osoba)
int szukaj_osobe(int pesel, osoba_t *osoba);

void wyswietl_osobe(osoba_t *osoba);

void wyswietl_liste(osoba_t tab[], int ile);

int usun_osobe(int pesel);

void menu();

int main()
{
    koniec = 0;
    lelem = 0;

    int pesel;
    int wybor;
    osoba_t osoba;

    printf("Baza danych osob\n");

    do
    {
        menu();

        scanf("%d", &wybor);

        switch (wybor)
        {
        case 1:
            wczytaj_osobe(&osoba);

            dodaj_osobe(&osoba);

            break;
        case 2:
            wyswietl_liste(tab, lelem);

            break;
        case 3:
            printf("Szukaj - podaj pesel: ");

            scanf("%d", &pesel);

            szukaj_osobe(pesel, &osoba);

            wyswietl_osobe(&osoba);

            break;
        case 4:
            printf("Usun - podaj pesel: ");

            scanf("%d", &pesel);

            usun_osobe(pesel);

            break;
        case 5:
            printf("Koniec\n");

            return 0;
        }
    } while (1);

    printf("Koniec\n");
}

void menu()
{
    printf("1 dodaj, 2 lista, 3 szukaj, 4 usun, 5 koniec: \n");
}

int wczytaj_osobe(osoba_t *osoba)
{
    printf("Wprowadz imie: ");
    scanf("%s", osoba->imie);

    printf("Wprowadz nazwisko: ");
    scanf("%s", osoba->nazwisko);

    printf("Wprowadz pesel: ");
    scanf("%d", &osoba->pesel);

    return 0;
}

int dodaj_osobe(osoba_t *osoba)
{
    if (koniec < MAX)
    {
        tab[koniec] = *osoba;
        indeks[koniec] = osoba->pesel;

        koniec++;
        lelem++;

        printf("Dodano nowa osobe do bazy danych.\n");

        return 0;
    }

    printf("Nie mozna dodac nowej osoby, baza danych jest pelna.\n");

    return 1;
}

int szukaj_osobe(int pesel, osoba_t *osoba)
{
    for (int index = 0; index < lelem; index++)
    {
        if (indeks[index] == pesel)
        {
            *osoba = tab[index];

            printf("Znaleziono osobe o podanym peselu.\n");

            return 0;
        }
    }

    printf("Nie znaleziono osoby o podanym peselu.\n");

    return 1;
}

void wyswietl_osobe(osoba_t *osoba)
{
    printf("Imie: %s\n", osoba->imie);
    printf("Nazwisko: %s\n", osoba->nazwisko);
    printf("Pesel: %d\n", osoba->pesel);
}

void wyswietl_liste(osoba_t tab[], int ile)
{
    printf("Lista osob w bazie danych:\n");

    for (int index = 0; index < ile; index++)
    {
        printf("%d. ", index + 1);
        wyswietl_osobe(&tab[index]);
        printf("\n");
    }
}

int usun_osobe(int pesel)
{
    for (int index = 0; index < lelem; index++)
    {
        if (indeks[index] == pesel)
        {
            for (int j = index + 1; j < lelem - 1; j++)
            {
                tab[j] = tab[j];
                indeks[j] = indeks[j];
            }

            lelem--;

            printf("Usunieto osobe o podanym peselu z bazy danych.\n");

            return 0;
        }
    }

    printf("Nie znaleziono osoby o podanym peselu w bazie danych.\n");

    return 1;
}