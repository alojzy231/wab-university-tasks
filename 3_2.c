#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c;

  printf("Wprowadz dlugosci bokow trojkata odzdzielonych spacja: ");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  if (a + b <= c || a + c <= b || b + c <= a)
  {
    printf("Z podanych wielkosci bokow nie mozna skonstruowac trojkata.\n");

    system("pause");
    return 0;
  }

  const float p = (a + b + c) / 2;
  const float area = sqrt(p * (p - a) * (p - b) * (p - c));

  printf("Pole trojkata wynosi: %f\n", area);

  getchar();
  return 0;
}
