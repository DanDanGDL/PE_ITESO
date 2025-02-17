#include <stdio.h>
/*
int main() {
    int Numero=40;
    printf("Valor del entero es: %i\nDirección de memoria es:
%p\n",Numero,&Numero); //Accedemos a los datos a traves de la variable int
*apuntador=&Numero; printf("Valor es: %i\nDirección es:
%p\n",*apuntador,apuntador); //Accedenis a los datos a traves del apuntador
    *apuntador=80; //Modificamos la variable através del apuntador
    printf("El nuevo valor es: %i\n",*p);
    return 0;
}
*/
/*
int main(){
    int Numero, Numero1; //Declarar variable
    float flotante;
    char L;
    // Numero = 6; //Inicializar variable
    printf("Dame un numero");
    int R1=scanf("%i",&Numero);
    printf("Dame otro número");
    int R2=scanf("%i",&Numero1);
    printf("Dame una letra");
    int R4=scanf("%c",&L);
    printf("Dame un número flotante");
    double R3=scanf("%f",&flotante);
    printf("Los valores son: %i %i %c %.1f",Numero,Numero1,L,flotante);
    printf("Los retornos son: %i %i %c %f",R1,R2,R4,R3);

    return 0;
}
*/
/*
int main() {
  char Nombre[6];
    char Apellido[20];
  int R1=scanf("%5s%s",Nombre,Apellido);
  printf("%s %s ", Nombre,Apellido);
  return 0;
}
*/
int main(){
    int Nombre[]={1,2,3,4};
    int *pointer=Nombre;
    printf("Valor: %i, Dirección:%p\n",Nombre[0],Nombre);
    printf("Valor: %i, Dirección:%p\n",*pointer, pointer);
    pointer++;
    printf("Valor: %i, Dirección:%p\n",Nombre[1],Nombre);
    printf("Valor: %i, Dirección:%p\n",*pointer, pointer);
    return 0;
}