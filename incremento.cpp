#include <stdio.h>

int main()
{
	int calificacion;
	int cuentaA=0, cuentaB=0, cuentaC=0;
	
	printf("Introduzca calificacion o EOF para salir");
	
	while((calificacion = getchar()) != EOF)
	{
		switch(calificacion)
		{
			case 'A':
				++cuentaA;
				printf("A");
				break;
			case 'B':
				++cuentaB;
				printf("B");
				break;
			case 'C':
				++cuentaC;
				printf("C");
				break;	
			case '\n':
				break;
			default:
				printf("Introdujo una letra incorrecta");
				break;
		}
	}
	printf("A %d",cuentaA);
	printf("B %d",cuentaB);
	printf("C %d",cuentaC);
	return 0;
}
