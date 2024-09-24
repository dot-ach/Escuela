#include <stdio.h>

int main()
{
  int heroes, villanos, neutrales, numero, cantNumeros;
  int i;
  
  i=0;
  heroes=0;
  neutrales=0;
  villanos=0;

  scanf("%d", &cantNumeros);

  while (i < cantNumeros)
  {
    scanf("%d", &numero);

    if (numero < 0)
    {
      villanos = villanos + 1;
    }
    else if(numero == 0)
    {
      neutrales = neutrales + 1;
    }
    else
    {
      heroes = heroes + 1;
    }
    
    i++;
  }
  
  printf("%d %d %d \n", heroes, villanos, neutrales);

  return 0;
}