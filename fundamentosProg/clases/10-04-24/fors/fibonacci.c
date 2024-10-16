#include <stdio.h>

int main()
{
  int i, numA, numB, suma;

  i = 0;
  numA = 0;
  numB = 1;
  suma = 0;

  while (i<= 1000)
  {
    suma = numA + numB;
    numA = numB;

    printf("\t%d", suma);

    i++;
  }

  // suma = numA + numB;

  // for(i = 1; i<=1000000; i++)
  // {
  //   suma = suma + numA;
  //   numA = suma;

  //   printf("\t%d", suma);
  // }

  

  return 0;
}