#include <conio.h>
#include <stdio.h>

void main()
{
	int num;
	
	printf("Digite um numero\n");
	scanf("%d", &num);
	
	if(num % 5 == 0)
	{
		printf("Numero divisivel por 5");
	}
	else
	{
		printf("Numero nao divisivel por 5");		
	}

}