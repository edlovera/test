#include <stdio.h>

int  num1, num2, num3;
int ordenar(int num1,int num2,int num3)
{
	int max = 0;
	if(num1 > 0)
	{
		max = num1;	
	}
	if(num2 > max) 
	{
		max = num2;
	}
	if(num3 > max)
	{
		max =num3;
	}
	return max;
}
int main()
{

	printf("introduzca un numero 3: \n");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("El maximo es %d ", ordenar(num1,num2,num3));
	return 0;
}


