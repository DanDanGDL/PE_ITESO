#include<stdio.h>
int main(){
  int A, B;
  printf("Dame 2 numeros separados x espacios");
  int R1=scanf("%d %d",&A, &B);
  printf("La suma de %d y de %d es igual a %d\n",A,B,A+B);
  printf("La resta de %d y de %d es igual a %d\n",A,B,A-B);
  printf("La multiplicación de %d y de %d es igual a %d\n",A,B,A*B);
  int Division=A/B;
  float Division1=(float)A/B;
  int Residuo=A%B;
  printf("El divisor es %d\n",B);
  printf("El dividendo es %d\n",A);
  printf("El cociente es: %d\n",Division);
  printf("El residuo es %f\n", Division1);
  return 0;
}