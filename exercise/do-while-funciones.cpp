#include <stdio.h>
#include <math.h>
#include <windows.h>

int suma(int entero1, int entero2){ 
    int resultado = 0;
    resultado = entero1 + entero2; 
    return resultado;
}

int resta (int entero1, int entero2){ 
    int resultado = 0;
    resultado = entero1 - entero2; 
    return resultado;
 }
int multiplicacion (int entero1, int entero2){ 
    int resultado = 0;
    resultado = entero1 * entero2; 
    return resultado;
   }  
int division(int entero1, int entero2){ 
    int resultado = 0;
    	if (entero2 ==0){
			printf("La operacion entre 0 no esta definida");
		}
		else{
		resultado =entero1 / entero2; 
		return resultado;  }
		 }

int potencia (int entero1, int entero2){ 
    int resultado = 0;
    resultado = pow(entero1,entero2);
    return resultado;
 }
int raiz_cuadrada (int entero1, int entero2){
    int resultado = 0;
   if(entero1<0){
				printf("No esta definida");
		}
		else{
			resultado = sqrt(entero1); 
           return resultado; }
 }

int factorial (int entero1){
    int factorial = 0;
   for(int i=1; i<=entero1; ++i)
{ factorial=factorial*i;
}
    return factorial; }
 




int main()
{
	//Declarando variables
	int opcion;
	float n1, n2, resultado;
    int n, factorial; 



	
	do{
	system("pause");
	system("cls"); //Limpiar pantalla
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Division\n");
	printf("\t 4.- Multiplicacion\n");
	printf("\t 5.- Potencia\n");
	printf("\t 6.- Raiz cuadrada\n");
    printf("\t 7.- factorial\n");
	printf("\t 8.- Salir\n");
	scanf("%d",&opcion);	
	system("cls"); //Limpiar pantalla
	
	if(opcion==6){
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
	}
	
	else if(opcion==7){
	printf("\nDame el primer valor: ");
	scanf("%d", &n);
	}
	
	else if(opcion>=8){
		
	}
	else{
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
		printf("\nDame el segundo valor: ");
		scanf("%f", &n2);
	}

	//Estructura de control de selecci¨®n multiple

	switch(opcion)
	{
	case 1:
		resultado = n1 + n2;
		printf("%f", resultado);
		break;
	case 2:
		resultado = n1 - n2;
		printf("%f", resultado);
		break;
	case 3: 
		if(n2==0)
		{
			printf("La operacion entre 0 no esta definida");
		}
		else{
		resultado = n1 / n2;
		printf("%f", resultado);
		}
		break;
	case 4: 
		resultado = n1 * n2;
		printf("%f", resultado);
		break;
	case 5: 		
		resultado = pow(n1,n2);
		printf("%f", resultado);
		break;
	case 6: 
		if(n1<0){
				printf("No esta definida");
		}
		else{
			resultado = sqrt(n1);
			printf("%f", resultado);
		}
		break;
	case 7:
		
factorial = 1;
for(int i=1; i<=n; ++i)
{ factorial=factorial*i;
}
printf("%d", factorial);
    break ;
	
	default:
		printf("Salir");
		exit(0);
	}	//Sale break
}while(opcion<8);

 } 
