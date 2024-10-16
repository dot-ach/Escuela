#include <stdio.h>

int NombreFuncion(int a, int b);

int main()
{
  int a, b, c;

  a = 5;
  b = 6;
  c = NombreFuncion(a,b);

  printf("%d", c); 
  return 0;
}

int NombreFuncion(int a, int b)
{
  return a + b;
}