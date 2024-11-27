#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

int main()
{
  int i, counter_3, counter_primos, validate_primos, aN, tamano_conjunto;
 
  conjunto a, b, c;
  InicializarConjunto(&a);
  InicializarConjunto(&b);
  InicializarConjunto(&c);
  
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
  printf("Conjunto A:\n");
  ImprimeConjunto(&a);
  printf("\nConjunto B:\n");
  ImprimeConjunto(&b);

  counter_primos = 0;
  for(i = 0; i < a.size; i++)
  {
    validate_primos =  EsPrimo(a.C[i]);
    if(validate_primos == 1)
    {
      counter_primos++;
    }
  }
  for(i = 0; i < b.size; i++)
  {
    validate_primos =  EsPrimo(b.C[i]);
    if(validate_primos == 1)
    {
      counter_primos++;
    }
  }

  printf("\nLos conjuntos A y B tienen %d numeros primos\n", counter_primos);


  for(i = 0; i < a.size;)
  {
    // printf("\n --> %d",a.C[i]);
    if(EsPrimo(a.C[i]) == 1 || a.C[i] % 2 == 0)
    {
      // printf("\n => %d",a.C[i]);
      EliminarElemento(&a, a.C[i]);
      // printf("\n -> %d",a.C[i]);
    }
    else
    {
      i++;
    }
  }

  for(i = 0; i < a.size; i++)
  {
    AgregarElemento(&c, a.C[i]);
  }
  for(i = 0; i < b.size; i++)
  {
    AgregarElemento(&c, b.C[i]);
  }
  printf("\nConjunto A:");
  ImprimeConjunto(&a);
  printf("\nConjunto B:");
  ImprimeConjunto(&b);
  printf("\nConjunto C:");
  ImprimeConjunto(&c);



  return 0;
}