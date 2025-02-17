/*
#include <stdio.h>
int main(){
  int numero = 1; // Entero
  printf("el numero en formato decimal es: %d\n", numero);
  printf("el numero en formato entero es: %i\n",numero);
  return 0;
}
*/
/*
#include <stdio.h>
int main(){
  float flotante = 2.568727; // Flotante
  double Doble = 5.78991; //Doble
  printf("El valor flotante es: %.2f\n", flotante);
  printf("El valor flotante en notación cientifica es: %.2e\n", flotante);
  printf("El valor flotante en notación cientifica es: %10.2E\n", flotante);
  printf("El valor de Double es: %f\n", Doble);
  printf("El valor de Double con lf es: %lf\n", Doble);
  return 0;
}
*/
/*
#include <stdio.h>
int main(){
  char caracter ='B';
  char texto[]="Hola"; //Cadena de caracteres
  printf("El valor del caracter es: %c\n",caracter);
  printf("Tu texto es: %s\n",texto);
  return 0;
}
*/
/*
#include <stdio.h>
int main(){
  printf("Hola mundo \"1%%\" de mundo\n");
return 0;
}
*/
#include<stdio.h>
int main(){
  char caracter='B';
  float flotante=2.568727;
  double doble=5.78991;
  int numero=10;
  printf(" El caracter es: \t%c\n El flotante es: \t%f\n El doble es: \t\t%lf\n El entero es: \t\t%d\n",caracter,flotante,doble,numero);
}

/*Para printf %d y %i es indistinto
%d <== Decimal (Base 10)
%i <== Entero (Base 10, Base 8[octal], Base 6[hexadecimal]))
%f <== Flotante (float)
%m.nf <== n(cualquier numero) es el numero de decimales que queremos. m(cualquier numero) es el numero de caracteres que queremos.
%e & %E <== Notación cientifica
%lf <== Double
\n <== Salto de linea
\t <== Tabulador
\" <== Comillas en un printf
*/
