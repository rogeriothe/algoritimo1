#include <stdio.h>

int main(int argc, char** argv)
{	
	int num;
	printf("Digite um numero:");
	
	scanf("%d", &num);
	
	if (num % 3 == 0)
	{
		printf("Multiplo de 3(tres)");
	}
	else
	{
		printf("Nao e multiplo de 3(tres)");		
	}
	
	return 0;
}