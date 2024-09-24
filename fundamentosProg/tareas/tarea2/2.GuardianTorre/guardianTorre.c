#include <stdio.h>

int main()
{
  int piedraPoderosa, cantPiedras, piedra;
  int i;

  i = 0;
  piedraPoderosa = 0;

  scanf("%d", &cantPiedras);

  while (i < cantPiedras)
  {
    scanf("%d", &piedra);

    if(piedra > piedraPoderosa)
    {
      piedraPoderosa = piedra;
    }

    i++;
  }

  printf("%d \n", piedraPoderosa);
  

  return 0;
}