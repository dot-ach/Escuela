#include <stdio.h>

int main() 
{
  int cantEnteros, mensajeSecreto, entero;
  char* coincide;
  int i;

  i = 0;
  coincide = "NO";

  scanf("%d %d", &cantEnteros, &mensajeSecreto);

  while (i < cantEnteros)
  {
    scanf("%d", &entero);

    if(entero == mensajeSecreto)
    {
      coincide = "YES";
      i = cantEnteros;
    }

    i++;
  }
  
  printf("%s \n", coincide);

  return 0;
}