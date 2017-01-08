#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#test

enum Estatus {CONTINUA, GANA, PIERDE};

int tirarDados(void);

int main()
{
	int suma;
	int miPunto;
	
	enum Estatus estatusJuego;
	
	srand(time(NULL));
	
	suma = tirarDados();
	
	switch(suma)
	{
		case 7:
		case 11:
			estatusJuego = GANA;
			printf("Gana");
			break;
		
		case 2:
		case 3:
		case 12:
			estatusJuego = PIERDE;
			printf("Pierde");
			break;
			
		case 8:
		case 9:
		case 10:
			miPunto = suma;
			printf("Su punto es %d: ",miPunto);
			estatusJuego = CONTINUA;
			break;
			
		while(estatusJuego == CONTINUA)
		{
			suma = tirarDados();
			if(miPunto==suma)
			{
				estatusJuego = GANA;
			}
			else
			{
				suma = 7;
				estatusJuego = PIERDE;
			}
		} 
		
	}
	
	if(estatusJuego == GANA)
	{
		printf("Jugador GANA \n");
	}
	else
	{
		printf("Jugador Pierde \n");
	}
	return 0;
}

int tirarDados(void)
{
	int dado1;
	int dado2;
	int sumaTmp;
	
	dado1 = 1 + (rand() % 6);	
	dado2 = 1 + (rand() % 6);
	
	sumaTmp = dado1 + dado2;
	
	printf("El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTmp);
	
	return sumaTmp;
}
