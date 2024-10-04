#include <stdio.h>

int main()
{
  char palabra[51];
  int lenght, i;

  lenght = 0;
  i = 0;
  scanf("%s", palabra);

  while (palabra[lenght] != 0)
  {
    lenght++;
  }
  
  while (lenght - 3 >= 0)
  {
    printf("%c", palabra[i]);
    lenght--;
    i++;
  }
  

  // printf("%d", lenght);
  return 0;
}