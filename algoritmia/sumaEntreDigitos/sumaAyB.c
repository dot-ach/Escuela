#include <stdio.h>

int main()
{
  int numero, cantNumeros, primerDigito, segundoDigito, suma;
  int i;

  i = 0;

  scanf("%d", &cantNumeros);

  while (i < cantNumeros)
  {
    scanf("%d", &numero);

    primerDigito = numero / 10;
    segundoDigito = numero % 10;

    suma = primerDigito + segundoDigito;

    printf("%d \n", suma);

    i++;
  }
  
  
  return 0;
}