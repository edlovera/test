#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	unsigned semilla = 67;
	
		srand(time(NULL));
	for(int a = 1; a < 19; a++)
	{
		printf("%10d", 1 + (rand() % 6));
		if(a % 3 == 0)
		{
			printf("\n");
		}
	}	
	return 0;	
}

