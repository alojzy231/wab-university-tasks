// Oblicza pole i obwod kola

#include <stdio.h>

int main()
{
    const float PI = 3.14159265;
    float radius;

    printf("Wprowadz dlugosc ramienia kola: ");
    scanf("%f", &radius);

    printf("Pole kola wynosi: %f\n", radius * radius * PI);
    printf("Obwod kola wynosi: %f\n", 2 * radius * PI);

    getchar();
    return 0;
}
