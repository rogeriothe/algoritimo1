#include <stdio.h>
// Disciplina :  Algoritimos e Programação I
// Professor : Arlino Henrique Magalhães de Araújo
// Aluno : Rogério de Lima Sousa
// Disponível no repositório do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
int main(int argc, char** argv)
{
	float peso, altura, imc;
	printf("Digite seu peso em Kilos:");
	scanf("%f", &peso);
	
	printf("Digite sua altura em Metros:");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 20)
	{
		printf("Abaixo do peso\n");
	   	printf("IMC: %f", imc);
	}
	else
	{
		if ((imc >= 20) && (imc < 25))
		{
			printf("Seu peso esta normal\n");
		   	printf("IMC: %f", imc);
		}
		else
		{
			if ((imc >= 25) && (imc < 30))
			{
				printf("Voce esta com excesso de peso\n");
			   	printf("IMC: %f", imc);
			}
			else
			{
				if ((imc >= 30) && (imc < 35))
				{
					printf("Voce esta com obesidade\n");
				   	printf("IMC: %f", imc);
				}
				else
				{
					if (imc >= 35)
					{
					   	printf("Voce esta com obesidade morbida\n");
					   	printf("IMC: %f", imc);
					}
				}
			}
		}
	}
	
	return 0;
	
}