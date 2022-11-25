// Oblicza dzialanie matematyczne

#include <stdio.h>
#include <math.h>

int main()
{
    const double y = ((0.5 * pow(sin(0.45), 2)) + (2 * tan(sqrt(2)))) / ((log10(14)) + (2 * exp(4)));

    printf("Wartość działania: %lf\n", y);

    return 0;
}