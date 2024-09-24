#include <stdio.h>

int main()
{
  int candtidadMonedas, moneda, suma; 
  int i;

  i = 0;
  suma = 0;

  scanf("%d", &candtidadMonedas);
  
  while (i < candtidadMonedas)
  {
    scanf("%d", &moneda);
    if(moneda % 2 == 0)
    {
      suma = suma + moneda; 
    }

    i++;
  }
  
  printf("Suma: %d \n", suma);

  return 0;
}