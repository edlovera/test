#include <stdio.h>

void cambiarNumero(int *num);

int main()
{
	int numero = 5;
	printf("Valor %d: ", numero);
	cambiarNumero(&numero);
	printf("Valor %d: ", numero);
}

void cambiarNumero(int *num)
{
	
	*num = *num * 5;
}
