#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 10)
    {
        printf("i is %d\n", i);

        i++;
    }

    i = 0;

    do
    {
        printf("i is %d\n", i);

        i++;
    } while (i < 10);

    return 0;
}
