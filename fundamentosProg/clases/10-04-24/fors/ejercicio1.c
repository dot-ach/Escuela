#include <stdio.h>

int main()
{
  int i;

  for(i = 0; i<10001; i = i + 2)
  {
    printf("\n%d", i);
  }

  return 0;
}