#include <stdio.h>
// Disciplina :  Algoritimos e Programação I
// Professor : Arlino Henrique Magalhães de Araújo
// Aluno : Rogério de Lima Sousa
// Disponível no repositório do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
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