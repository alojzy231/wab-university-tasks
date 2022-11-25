// Kalkulator prosty

#include <stdio.h>
int main()
{
  double a, b;
  int operator;

  printf("KALKULATOR\n");

  scanf("%lf", &a);

  operator= getchar();

  scanf("%lf", &b);

  double result;

  switch (operator)
  {
  case '+':
    result = a + b;

    break;
  case '-':
    result = a - b;

    break;
  case '*':
    result = a * b;

    break;
  case '/':
    result = a / b;
  }

  printf("Wynik dzialania: %lf\n", result);

  getchar();
  return 0;
}
