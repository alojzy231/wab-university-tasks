// Wyświetla rozmiar roznych typow prostych w bajtach

#include <stdio.h>
int main()
{
  char typChar;
  unsigned char typUnsignedChar;
  signed char typSignedChar;
  int typInt;
  unsigned int typUnsignedInt;
  signed int typSignedInt;
  short typShort;
  long typLong;
  unsigned long typUnsignedLong;
  float typFloat;
  double typDouble;
  long double typLongDouble;
  _Bool typBool;

  printf("nazwa typu | rozmiar (w bajtach)\n");
  printf("char | %zu\n", sizeof(typChar));
  printf("unsigned char | %zu\n", sizeof(typUnsignedChar));
  printf("signed char | %zu\n", sizeof(typSignedChar));
  printf("int | %zu\n", sizeof(typInt));
  printf("unsigned int | %zu\n", sizeof(typUnsignedInt));
  printf("signed int | %zu\n", sizeof(typSignedInt));
  printf("short | %zu\n", sizeof(typShort));
  printf("long | %zu\n", sizeof(typLong));
  printf("unsigned long | %zu\n", sizeof(typUnsignedLong));
  printf("float | %zu\n", sizeof(typFloat));
  printf("double | %zu\n", sizeof(typDouble));
  printf("long double | %zu\n", sizeof(typLongDouble));
  printf("bool | %zu\n", sizeof(typBool));

  getchar();
  return 0;
}
