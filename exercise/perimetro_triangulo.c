#include <stdio.h>

int main(){
    
    float lado, perimetro;
    
    printf("Ingresa un numero de lado para calcular el perimetro de un triangulo equilatero: ");
    
    scanf("%f", &lado);
    perimetro = lado+lado+lado;
    printf("\t El perimetro es: %0.2f ",perimetro );
    
     return 0 ;
}
