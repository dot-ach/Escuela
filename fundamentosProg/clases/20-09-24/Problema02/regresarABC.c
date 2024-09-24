#include <stdio.h>

int main()
{
  int cantNumeros, cantPares, sumaImpares, masChico, numero;
  int i;

  cantPares = 0;
  sumaImpares = 0;
  masChico = 0;
  i = 0;

  scanf("%d", &cantNumeros);
  
  while (i < cantNumeros)
  {
    scanf("%d", &numero);

    if(i == 0)
    {
      masChico = numero;
    }

    if(numero % 2 == 0)
    {
      cantPares += 1;
    }
    else if(numero % 2 != 0)
    {
      sumaImpares += numero;
    }
    if(numero < masChico)
    {
      masChico = numero;
    }

    i++;
  }

  printf("\n%d \n%d \n%d \n", cantPares, sumaImpares, masChico);
  

  return 0;
}