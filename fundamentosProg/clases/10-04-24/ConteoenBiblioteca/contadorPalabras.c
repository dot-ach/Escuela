#include <stdio.h>

int main()
{
  char palabra[1001];
  int i, contEspacios;
  
  scanf("%[^\n]", palabra);

  i = 0;
  contEspacios = 0;

  while (palabra[i] != 0)
  {
    if(palabra[i] == 32)
    {
      contEspacios++;
    }
    i++;
  }

  

  printf("%d", contEspacios + 1);
  
  
  // printf("%d", letra);

  return 0;
}