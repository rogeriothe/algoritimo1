#include <conio.h>
#include <stdio.h>

int main()
{
	float salario, valor_emprestimo, num_parcelas;
	
	printf("Qual o valor do salario?\n");
	scanf("%f", &salario);

	printf("Qual o valor do emprestimo?\n");
	scanf("%f", &valor_emprestimo);	

	printf("Qual a quantidade de parcelas?\n");
	scanf("%f", &num_parcelas);

	if((valor_emprestimo / num_parcelas) > (salario * 0.3))
	{
		printf("Emprestimo nao aprovado");
	}
	else
	{
		printf("Emprestimo aprovado");		
	}
	return 0;
}