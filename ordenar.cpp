#include <stdio.h>
#define TAMANIO 10

int arr1[TAMANIO];
int num;
int temp=0;
int main()
{
	printf("Introduzca los numeros a ordenar: \n");
	
	for(int a = 0; a < TAMANIO; a++)
	{
		printf("Numero %d: ", a);
		scanf("%d",&num);
		arr1[a]=num;
	}
	for(int b = 0; b < 100; b++)
	{
		for(int j=0; j < TAMANIO-1; j++)
		{
			
			if(arr1[j] > arr1[j+1]) 
			{
				temp=arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=temp;
			}
		
		}
	}
	
		for(int j; j < TAMANIO; j++)
		{
			

			printf("%4d %4d \n",j, arr1[j]);
		}
}

