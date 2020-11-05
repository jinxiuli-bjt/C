#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int opcion;
	float x, y, resultado;
	
	

	printf(" Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion :\n");
	printf("\t 4.- Division :\n");
	printf("\t 5.- Potencia :\n");
	printf("\t 6.- Raiz cuadrada :\n");
	printf("\t 7.- Salir \n");
	scanf("\t%d",&opcion);
	
if (opcion ==6)	 {
	
	printf (" Ingresa un numero: \n");
	scanf("%f", &x);
	 } 
	 
	 else if (opcion >=7)  {
	 } 
	 
	 else {
	
printf("Ingresa un numero : \n");	
scanf("%f", &x);

printf("Ingresa otro numero :\n");
scanf("%f", &y);	
	} 
	

	
	switch(opcion)
	{
	case 1: 
		resultado = x + y  ;
		printf ("%0.2f", resultado);
		break;
		
	case 2: 
	    resultado = x - y ;
	    printf ("%0.2f", resultado);
		break;
		
	case 3:
	    resultado = x * y  ;
		printf ("%0.2f", resultado);
		break;
		
    case 4:
    	 if(y==0)
    {	 
       printf("la operacion no esta definida");
       } 
       
        else  {
	    resultado = x / y  ;
		printf ("%0.2f", resultado);
			}
		break;
		
	 case 5:
	 	resultado = pow(x, y);
		printf("%0.2f", resultado);
		break;
	
	case 6:
	    if(x<0)  {
	    	printf("la operacion no esta definida");
		 } 
		 
	 else  {	
		resultado=sqrt(x); 
		printf("%0.2f", resultado);
		}
		break;	
		

		
	default:
		printf("Salir");
		exit(0);
	
} 
} 
