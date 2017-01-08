#include <stdio.h>

int main()
{
	int contador;
	int calificacion;
	int total;
	
	int promedio;
	
	total = 0;
	contador = 1;
	
	while(contador <= 10)
	{
		printf("Introduzca la calificacion: ");
		scanf("%d", &calificacion);
		total = total + calificacion;
		contador = contador + 1;
	}
	promedio = total / 10;
	printf("El promedio es %d",promedio);
	return 0;

}
