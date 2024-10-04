#include <stdio.h>

int main()
{
  //Se declaran variables para cantidad de numeros y los numeros que serán comparados en los ciclos
  int cantNumeros, numeroComparador, numeroComparado; 
  //Se declaran variables donde se guardarán los numeros mayores, done n1 es el mayor y n3 es el menor
  int n1, n2, n3;
  //Se declaran los iteradores para cada ciclo.
  int i, j, k, l;
  //Se declara variable donde se guardará el promedio de los 3 numeros mas grandes
  float promedio;

  //Se escanea cuantos numeros se ingresarán
  scanf("%d", &cantNumeros);
  
  //Se declara el arreglo con una cantidad de espacios dada por la cantidad de numeros que ingresó el usuario
  int arregloNumeros[cantNumeros];
  
  i = 0;//Contador para leer los numeros
  j = 0;//Contador para mostrar los primeros numeros del array
  k = 0;//Contador para el primer numero del arrar 
  l = 1;//Contador para recorrer los numeros del array

  //Primer ciclo donde se guardan los numeros del usuario en su respectivo espacio en el array
  while (i < cantNumeros)
  {
    scanf("%d", &arregloNumeros[i]);
    i++;
  }

  //Ciclos que ordenan los numeros del array de mayor a menor
  while (k < cantNumeros)
  {
    while (l < cantNumeros)
    {
      numeroComparador = arregloNumeros[k];
      numeroComparado = arregloNumeros[l];
      if(arregloNumeros[k] >= arregloNumeros[l])
      {
        l++;
      }
      else
      {
        arregloNumeros[k] = numeroComparado;
        arregloNumeros[l] = numeroComparador;
      }
    }
    k++;
    l = k + 1;
  }
  
  //Se asigna el valor mayor a n1 y el menor a n3 una vez ya acomodados los numeros dentro del arreglo
  n1 = arregloNumeros[0];
  n2 = arregloNumeros[1];
  n3 = arregloNumeros[2];

  //Operación para sacar el promedio de los 3 numeros mayores que se guarda dentro de la variable "promedio"
  promedio = (n1 + n2 + n3) / 3;

  //Ciclo con el que se imprimen los 3 numeros mas grandes 
  while(j <= 2)
  {
    printf("%d \n", arregloNumeros[j]);
    j++;
  }

  //Se impime el resultado, o sea el promedio de los 3 numeros mas grandes
  printf("\n \n %.2f", promedio);

  

  return 0;
}