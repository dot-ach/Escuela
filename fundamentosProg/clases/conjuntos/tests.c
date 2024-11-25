#include <stdio.h>

int main()
{

  int num, i, primo;

  primo = -1;

  scanf("%d", &num);

  for(i = 1; i <= num; i++)
  {
    if(num % i == 0 && i != 1 && i != num)
    {
      primo = 0;
    }
  }

  if(primo == 0)
  {
    printf("No es primo");
  }else
  {
    printf("Es primo");
  }


  return 0;
}