#include<stdio.h>//Input  Output
#include<math.h>

#define PI 3.1416 //definiendo una constante

int main(){
	float area, radio; //declarando variables de tipo flotante
	radio = 5;  //asignando valor a variable radio
	area = PI * pow(5,2); //asignando resultado de la operacion a variable area
	printf("Area\n"); //imprimiendo titulo
	//imprimiendo resultado
	printf("Area de Circulo con radio 5:  %f", area);
	return 0;
}
