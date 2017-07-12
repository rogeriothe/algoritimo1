#include <stdio.h>

int main(int argc, char** argv)
{
	int num, cont, temp, total;
	printf("Digite a quantidade de numeros:\n");
	scanf("%d", &num);
	
	cont = 1;
	temp = 0;
	total = 0;
	
	while(cont <= num)
	{
		printf("Digite o %d numero:\n", cont);
		scanf("%d", &temp);
		total = total + temp;
		cont++;		
	}
	
	printf("O total: %d\n", total);
	
	return 0;
}