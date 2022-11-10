#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int i, j;
    printf("Witamy w Lab WSH\n");
    for (i = 0; i < 10; i++)
    {
        j = i + 10;
        printf("Krok %d\n", i);
    }
    printf("Koniec\n");
    getchar();
    return EXIT_SUCCESS;
}
