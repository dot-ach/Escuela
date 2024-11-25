#include <stdio.h>
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
  for(i = 0; i < (*A).size && b != -1; i++)
  {
    if((*A).C[i] == e)
    {
      b = i;
    }
  }

  if(b == -1)
  {
    printf("El elemento no existe.");
    exit(1);
  }

  for(i = b; i < (*A).size - 1; i++)
  {
    (*A).C[i] = (*A).C[i++];
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
    printf("%d", (*A).C[i]);
  }
}