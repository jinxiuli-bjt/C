#include <stdio.h>
#include<math.h>
#define PI 3.14159

int main()
{
int r;
float l, a;
printf("Introduce radio (entero): ");
scanf("%d", &r);

l=2*PI*r; 
a=PI* (pow(r, 2));



printf("La longitud de la circunferencia vale %.2f\n", l);
printf("El area del circulo vale %.2f\n", a);




}


