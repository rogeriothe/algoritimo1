#include <stdio.h>

int main(int argc, char** argv)
{
	float sal_minimo, salario, qtd;

	printf("Digite o valor do salario minimo atual:");
	scanf("%f", &sal_minimo);
	printf("Digite o valor de seu salario:");
	scanf("%f", &salario);
	
	qtd = salario / sal_minimo;
	
	printf("Voce recebe %f salarios minimos", qtd );
	
	return 0;
}