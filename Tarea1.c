#include<stdio.h>
int main(){
  int Numero, Numero1; //Declarar variable
  float Letra;
  char L;
  //Numero=6; //Inicializar variable
  printf("Dame un numero: ");
  int R1=scanf("%i",&Numero);
  printf("Dame otro numero: ");
  int R2=scanf(" %i",&Numero1);
  printf("Dame una letra: ");
  int R3=scanf(" %c", &L);
  printf("Dame un numero flotante: ");
  int R4=scanf("%f", &Letra);
  printf("Los valores son:\n%i\n%i\n%c\n%f\n", Numero, Numero1, L, Letra);
  return 0;
}