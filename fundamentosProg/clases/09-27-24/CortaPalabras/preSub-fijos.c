#include <stdio.h>

int main()
{
  char palabra[51];
  int i, cantLetras, fromIzq, lenghtConst;
  
  i = 0;
  cantLetras = 0;
  
  scanf("%s", palabra);

  //Contamos cuantas letras tiene la palabra y el valor lo guardamos en una variable
  while (palabra[cantLetras] != 0)
  {
    cantLetras++;
  }

  lenghtConst = cantLetras;

  //Ciclo para los sufijos(¿?)
  while (cantLetras >= 0)
  {
    while (i < cantLetras)
    {
      printf("%c", palabra[i]);

      i++;
    }
    printf("\n");
    i = 0;
    cantLetras--;
  }

  // printf("%d, %d", i, cantLetras);

  cantLetras = 0;
  
  while (cantLetras <= lenghtConst)
  {
    while (i < cantLetras)
    {
      printf("%c", palabra[i]);

      i++;
    }
    printf("\n");
    i = 0;
    cantLetras++;
  }

  
  

  // printf("%d", lenght);
  return 0;
}