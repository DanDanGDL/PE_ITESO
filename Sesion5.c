#include <stdio.h>
//conversión Implicita

int main(){

  //IMPLICITA DE ASIGNACIÓN
  char variable='h';
  int numero=variable;
  printf("%d\n",numero);
  printf("El tamaño es: %lu\n",sizeof(numero));
  printf("El tamaño es: %lu\n",sizeof(variable));
  //CONVERSIÓN IMPLICITA DE OPERACIONES ARITMETICAS
  int N1=5;
  float F1=1.4;
  int R=N1+F1;
  printf("%d\n",R);
  printf("El tamaño es: %lu\n",sizeof(N1));
  printf("El tamaño es: %lu\n",sizeof(R));
  //conversión implicita de promoción de enteros
  char variable1='d';
  int Numero=6;
  int R1=variable1+Numero;
  printf("%d\n",R1);
  printf("El tamaño es: %lu\n",sizeof(variable1));
  printf("El tamaño es: %lu\n",sizeof(R1));

//conversión de implicita
  double D=4.789;
  int Num=(int) D;
  printf("%d\n",Num);
  printf("El tamaño es: %lu\n",sizeof(Num));
  printf("El tamaño es: %lu\n",sizeof(D));
  return 0;
}
