#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

int main()
{
  int i, counter_3;
 
  conjunto a, b, c;
  InicializarConjunto(&a);
  InicializarConjunto(&b);
  
  //Se agregan al conjunto 'a' los primeros 50 numeros naturales
  for(i = 0; i < 51; i++)
  {
    AgregarElemento(&a, i);
  }

  counter_3 = 21;

  for(i = 0; i < 51; i++)
  { 
    AgregarElemento(&b, counter_3);
    counter_3 = counter_3 + 3;
  }

  ImprimeConjunto(&a);
  ImprimeConjunto(&b);

  



  return 0;
}