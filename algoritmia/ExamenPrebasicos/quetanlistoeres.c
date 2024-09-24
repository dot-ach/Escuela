#include <stdio.h>

int main()
{
  char pintura[4][5];
  int esPosible;
  int i, j;

  i = 0;
  j = 0;
  esPosible = 0;

  while (i < 4)
  {
    scanf("%4s", pintura[i]);
    i++;
  }

  i = 0;

  while (i < 3)
  {
    while (j < 5)
    {
      if(pintura[i][j] == pintura[i+1][j])
      {
        esPosible = 1;
        i = 4;
      }
      else
      {
        j++;
      }
    }
    i = i + 2;
    j = 0;
  }

  if(esPosible == 1)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  


  // printf("%s", pintura);

  return 0;
}