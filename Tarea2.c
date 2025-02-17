//Daniel Aguilera 13/02/2025
#include <stdio.h>
//Ejercicio 1
/*
int main(){
  float celsius;
  int R1=scanf("%f", &celsius);
  float kelvin= celsius+273.15;
  float farenheit=(9*celsius)/5+32;
  printf("La temperatura equivale a %.2f °C que equivale a %.2f °F, y a %.2f Kelvin \n",celsius,farenheit,kelvin);
}
*/
//Ejercicio 2
/*
int main(){ //tomando en cuenta que el impuesto es el IVA (16%)
  int cantidad;
  float Precio_cu, Total_sin_Tax, Tax, Total_con_Tax;
  int R2=scanf("%d %f",&cantidad,&Precio_cu);
  float IVA=0.16;
  Total_sin_Tax=Precio_cu*cantidad;
  Tax=IVA*Total_sin_Tax;
  Total_con_Tax=Total_sin_Tax+Tax;
  printf(" \n INVOICE\n =============\n");
  printf(" Cantidad: %d\n Precio por unidad: %.2f\n Precio sin impuesto: %.2f\n Impuesto: %.2f\n Precio Final: %.2f\n",cantidad,Precio_cu,Total_sin_Tax,Tax,Total_con_Tax);
  return 0;
}
*/