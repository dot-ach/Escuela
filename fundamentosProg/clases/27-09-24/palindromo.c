#include <stdio.h>
#define MAX_LARGO 50

int main()
{
  int izq, der, length;
  char palabra[MAX_LARGO+1];

  length = 0;
  scanf("%s", palabra);

  while (palabra[length] != 0)
  {
    length++;
  }

  izq = 0;
  der = length - 1;

  while (izq != length - 1 && der >= 0 && palabra[izq] == palabra[der])
  {
    izq++;
    der--;
  }

  if(izq == length - 1){
    printf("Yes!");
  }
  else
  {
    printf("Nou");
  }
  // printf("%d", length);
  

  return 0;
}