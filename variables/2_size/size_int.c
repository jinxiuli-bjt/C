#include <stdio.h>
#include <limits.h>

int main()
{
	printf("Limites de tipos enteros\n");
	printf("*\n");
	printf("CHAR BIT\n");
	printf("Numero de bits en un byte : %d\n",CHAR_BIT);
	printf("Numero maximo de bytes en un caracter multibyte : %d\n",MB_LEN_MAX);
	printf("*\n");
	printf("Caracter con signo\n");
	printf("Manimo: %d\n",CHAR_MIN);
	printf("Maximo: %d\n",CHAR_MAX);
	
	printf("*\n");
	printf("Caracter sin signo\n");
	printf("Manimo: 0\n");
	printf("Maximo: %u\n",UCHAR_MAX);

	printf("*\n");
	printf("Short int con signo\n");
	printf("Manimo: %hi\n",SHRT_MIN);
	printf("Maximo: %hi\n",SHRT_MAX);

	printf("*\n");
	printf("Short int sin signo\n");
	printf("Manimo: 0\n");
	printf("Maximo: %hu\n",USHRT_MAX);
	
	printf("*\n");
	printf("Long int con signo\n");
	printf("Minimo: %li\n",LONG_MIN);
	printf("Maximo: %li\n",LONG_MAX);
	
	printf("*\n");
	printf("Long int sin signo\n");
	printf("Minimo: 0\n");
	printf("Maximo: %lu\n",ULONG_MAX);
return 0;
}
