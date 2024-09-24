#include <stdio.h>

int main()
{
  char stringPetya1[100];
  char stringPetya2[100];
  int valorLetraString1, valorLetraString2, outputValue;
  int i;

  outputValue = 0;
  i = 0;

  scanf("%s", stringPetya1);
  scanf("%s", stringPetya2);

  while (stringPetya1[i] != '\0')
  {
    valorLetraString1 = stringPetya1[i];
    if(valorLetraString1 <= 90)
    {
      valorLetraString1 = valorLetraString1 + 32;
      stringPetya1[i] = valorLetraString1; 
    }

    valorLetraString2 = stringPetya2[i];
    if(valorLetraString2 <= 90)
    {
      valorLetraString2 = valorLetraString2 + 32;
      stringPetya2[i] = valorLetraString2; 
    }
    i++;
  }

  valorLetraString1 = 0;
  valorLetraString2 = 0;
  i = 0;
  
  while (stringPetya1[i] != '\0' && outputValue == 0)
  {
    valorLetraString1 = stringPetya1[i];
    valorLetraString2 = stringPetya2[i];

    if(valorLetraString1 == valorLetraString2)
    {
      outputValue = 0;
      i++;
    }
    else if(valorLetraString1 > valorLetraString2)
    {
      outputValue = 1;
    }
    else
    {
      outputValue = -1;
    }
  }
  
  printf("%d", outputValue);

  return 0;
}