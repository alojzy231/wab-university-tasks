#include <stdio.h>

int main()
{
    unsigned char c;
    int mask = 1, sum = 0;

    scanf("%c", &c);

    while (c > 0)
    {
        if (c & mask)
            sum++;

        c = c >> 1;
    }

    printf("%d\n", sum);

    return 0;
}