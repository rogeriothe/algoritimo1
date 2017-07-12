#include <stdio.h>
// Disciplina :  Algoritimos e Programação I
// Professor : Arlino Henrique Magalhães de Araújo
// Aluno : Rogério de Lima Sousa
// Disponível no repositório do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
int main(int argc, char** argv)
{
	float salario, desconto;
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	
	if(salario <= 600.00)
	{
	   	printf("Isento de desconto.");		
	}
	else
	{
		if((salario > 600.00)&(salario <= 1200.00))
		{
			desconto = salario * 0.2;
			printf("Desconto: %f", desconto);
		}
		else
		{
			if((salario > 1200.00)&(salario <= 2000.00))
			{
				desconto = salario * 0.25;
				printf("Desconto: %f", desconto);
			}
			else
			{
					if(salario > 2000.00)
					{
						desconto = salario * 0.30;
						printf("Desconto: %f", desconto);
					}
			}	
		}
	}
	
	return 0;
}