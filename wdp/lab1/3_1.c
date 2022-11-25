// Oblicza pole i obwod kola

#include <stdio.h>

int main()
{
    const float pi = 3.14159265;
    float radius;

    printf("Wprowadz dlugosc ramienia kola: ");
    scanf("%f", &radius);

    const float area = 2;
    const float circumference = 3;

    printf("Pole kola wynosi: %f\n", radius * radius * pi);
    printf("Obwod kola wynosi: %f\n", 2 * radius * pi);

    getchar();
    return 0;
}
