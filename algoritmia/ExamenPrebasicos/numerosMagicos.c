#include <stdio.h>

int main ()
{
  char cadenaNumerica[100];
  int numeroValido, contadorDeCuatros, empiezaEnUno;
  int i;

  contadorDeCuatros = 0;
  i = 0;

  scanf("%s", cadenaNumerica);

  if(cadenaNumerica[0] != '1')
  {
    empiezaEnUno = 0; 
  }
  else
  {
    empiezaEnUno = 1;
    while(cadenaNumerica[i] != '\0')
    {

      if(cadenaNumerica[i] == '1' || cadenaNumerica[i] == '4')
      {
        if (cadenaNumerica[i] == '1')
        {
          contadorDeCuatros = 0;
          i++;
        }
        else
        {
          contadorDeCuatros++;
          i++;
        }
        
      }
      else
      {
        numeroValido = 0;
      }
    }
  }

  if(contadorDeCuatros < 3 && empiezaEnUno == 1)
  {
    numeroValido = 1;
  }
  else
  {
    numeroValido = 0;
  }

  if(numeroValido == 1)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }



  return 0;
}