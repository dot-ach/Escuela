#include <stdio.h>

float Suma(float a, float b);
float Resta(float a, float b);


int main()
{
  int opcionElegida;
  int verdadero = 1;

  printf("Elige la operación a realizar: \n 1.Suma \n 2.Resta \n 3.Multiplicación \n 4.División \n");

  scanf("%d", &opcionElegida);
  do
  {
    switch (opcionElegida)
    {
    case 1:
      // printf("Suma");
      float a;
      float b;
      scanf("%f", &a);
      scanf("%f", &b);
      printf("%.2f",Suma(a,b));   
      verdadero = 0;
      break;
    case 2:
      // printf("Resta");
      float a;
      float b;
      scanf("%f", &a);
      scanf("%f", &b);
      printf("%.2f",Resta(a,b));
      verdadero = 0;
      break;
    case 3:
      printf("Multiplicación");
      verdadero = 0;
      break;
    case 4:
      printf("División");
      verdadero = 0;
      break;
    
    default:
      break;
    }
  } while (verdadero);
  
  return 0; 
}

float Suma(float a, float b)
{
  return a + b;
}
float Suma(float a, float b)
{
  return a - b;
}