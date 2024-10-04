#include <stdio.h>

int main()
{
  char palabra[1001];
  int izq, der, i;

  i = 0;
  izq = 0;

  scanf("%s" ,palabra);

  while(palabra[i] != 0)
  {
    i++;
  }

  der = i - 1;

  while (izq < i && der >= 0 && palabra[izq] == palabra[der])
  {
    izq++;
    der--;
  }

  if(izq == i)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  
  // printf("\n %d,%d,%d", i, izq, der);
  return 0;
}