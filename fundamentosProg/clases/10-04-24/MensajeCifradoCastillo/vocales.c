#include <stdio.h>

int main()
{
  char palabra[1000];
  int contVocales, i;

  scanf("%s", palabra);
  // gets(palabra);
  
  i = 0;
  contVocales = 0;

  while(palabra[i] != 0)
  {
    if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u' || palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U')
    { 
      contVocales = contVocales + 1; 
    }

    i++;
  }
  printf("%d", contVocales);

  return 0;
}