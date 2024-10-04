#include <stdio.h>

int main()
{
  char palabra[1001];
  int i, contLetras;

  scanf("%s", palabra);
  
  i = 0;
  contLetras = 0;

  while (palabra[contLetras] != 0)
  {
    contLetras++;
    // i++;
  }

  contLetras = contLetras - 1;

  while (palabra[contLetras] != 0)
  {
    printf("%c",palabra[contLetras]);
    contLetras = contLetras - 1;
  }
  
  
  // printf("%s", palabra);
  return 0;
}