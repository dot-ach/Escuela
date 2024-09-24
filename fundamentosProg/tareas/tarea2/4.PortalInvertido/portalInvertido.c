#include <stdio.h>

int main  ()
{
  int cantRunas, runa;
  int i,j;

  i = 0;

  scanf("%d", &cantRunas);

  int runas[cantRunas]; 
  j = cantRunas - 1;

  while (i < cantRunas)
  {
    scanf("%d", &runa);
    runas[i] = runa;

    i++;
  }

  while (j >= 0)
  {
    printf("%d", runas[j]);
    j--;
  }
  
    // printf("%d", runas[cantRunas]);
  
  

  return 0;
}