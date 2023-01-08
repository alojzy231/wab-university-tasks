#include <stdio.h>
#include <string.h>

const int M = 4; // wiersze const
int N = 12;      // kolumny

void pisz_tab(char tab[][N], int row);
void sortuj(char[][N], int row);

int main()
{
    char t[4][12] = {"Tomek", "Jarek", "Zbyszek", "Agata"};

    puts("Tablica przed sortowaniem:\n");

    pisz_tab(t, M);
    sortuj(t, 4);

    puts("\n\nTablica po sortowaniu:\n");

    pisz_tab(t, M);

    getchar();

    return 0;
}

void pisz_tab(char tab[][N], int row)
{
    int j, k;
    for (j = 0; j < row; j++)
    {
        printf("%s \n", tab[j]);
    }
}

void sortuj(char tab[][N], int row)
{
    char temp[N];
    int i, j;
    for (i = 0; i < row - 1; i++)
    {
        for (j = 0; j < row - 1 - i; j++)
        {
            if (strcmp(tab[j], tab[j + 1]) > 0)
            {
                strcpy(temp, tab[j]);
                strcpy(tab[j], tab[j + 1]);
                strcpy(tab[j + 1], temp);
            }
        }
    }
}