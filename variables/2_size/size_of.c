#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
printf("Tamano de datos basicos\n");
printf("=======================\n");
printf("Tipo\tTamano en bytes\n");
printf("====\t===============\n");
printf("char\t%ld\n",sizeof(char));
printf("string\t%ld\n",sizeof(char[50]));
printf("int\t%ld\n",sizeof(int));
printf("float\t%ld\n",sizeof(float));
printf("double\t%ld\n",sizeof(double));
return 0;
}

