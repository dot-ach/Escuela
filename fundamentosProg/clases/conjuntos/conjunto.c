#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

void InicializarConjunto(conjunto *A)
{
  (*A).size = 0;
  return;
}

void AgregarElemento(conjunto *A, int e)
{
  if((*A).size == MAX_SIZE)
  {
    printf("Error, no hay espacio");
    exit(1);
  }
  (*A).size++;
  (*A).C[(*A).size - 1] = e;
}

void EliminarElemento(conjunto *A, int e)
{
  //Buscar Elemento
  int i, b;
  b = -1;
  for(i = 0; i < (*A).size; i++)
  {
    if((*A).C[i] == e)
    {
      b = i;
      break;
    }
  }
  if(b == -1)
  {
    printf("\nEl elemento no existe.");
    exit(1);
  }

  for(i = b; i < (*A).size - 1; i++)
  {
    (*A).C[i] = (*A).C[i+1];
  }
  (*A).size--;
}

int PerteneceElemento(conjunto *A, int e)
{
  int i, b, r;
  b = -1;
  
  for(i = 0; i < (*A).size; i++)
  {
    if((*A).C[i] == e)
    {
      b = 1;
    }
  }

  if(b == -1)
  {
    r = 0;
  }else
  {
    r = 1;
  }

  return r;
}

void ImprimeConjunto(conjunto *A)
{
  int i;
  for(i = 0; i < (*A).size; i++)
  {
    printf("\t %d", (*A).C[i]);
  }
}

int EsPrimo(int num)
{
  int i, primo;

  primo = -1;

  for(i = 1; i <= num; i++)
  {
    if(num % i == 0 && i != 1 && i != num)
    {
      primo = 1;
    }
  }



  if(primo == 1 || num == 0 || num == 1)
  {
    return 0;//no es primo
  }else
  {
    return 1;//es primo
  }

}