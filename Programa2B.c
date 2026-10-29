/*León Flores Ángel Ricardo 
Ejercicio 2 
Práctica 9*/

#include <stdio.h>
int main()

{
  
  int lista[10], elem = 0;

  //Validación 
  do
  {
    printf("Dame un número entre 1 y 10 para indicar la longitud del arreglo: ");
    scanf("%i", &elem);
  }
  while(elem < 1 || elem > 10);

  for(int i = 0; i < elem; i++)
  {
    printf("Da un número entero para el elemento %i del arreglo: ", i + 1);
    scanf("%i", &lista[i]);
  }

  printf("Los valores de la lista son: ");
  for(int j = 0; j < elem; j++)
  {
    printf("%i ", lista[j]);
  }
  printf("\n\n");
  return 0;
}
