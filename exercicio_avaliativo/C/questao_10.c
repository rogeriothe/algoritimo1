#include <stdio.h>

// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo

int main(int argc, char** argv)
{
	float peso, altura, imc;
	
	printf("Digite o seu peso:\n");
	scanf("%f", &peso);
	
	printf("Digite sua altura:\n");
	scanf("%f", &altura);
	
	imc = (peso / (altura * altura));
	
	printf("Seu imc: %f\n", imc);
	
	
	if(imc < 20.00)
	{
		printf("Voce esta abaixo do peso\n");		
	}
	else
	{
		if (imc >= 20.00 && imc < 25.00) 
		{
			printf("Voce esta com peso normal\n");		
		}
		else
		{
			if (imc > 25.00 && imc <= 30.00) 
			{
				printf("Voce esta com excesso de peso\n");		
			}
			else
			{
				if (imc > 30.00 && imc <= 35.00) 
				{
					printf("Voce esta com obesidade\n");		
				}
				else
				{
					if (imc > 35.00) 
					{
						printf("Voce esta com obesidade mobida\n");		
					}					
				}				
			}
		}
		
	}
	
	return 0;
}