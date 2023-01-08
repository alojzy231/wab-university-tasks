#include <stdio.h>
#include <string.h>

#define N 100

int main()
{
    char haystack[N];
    char needle[N];
    int count = 0;
    char *position;

    printf("Podaj lancuch: ");
    gets(haystack);
    printf("Podaj podlancuch: ");
    gets(needle);

    position = haystack;
    while ((position = strstr(position, needle)) != NULL)
    {
        count++;
        position++;
    }

    printf("Podlancuch wystapil %d razy\n", count);

    return 0;
}