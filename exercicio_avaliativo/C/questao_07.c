#include <stdio.h>
// Disciplina :  Algoritimos e Programação I
// Professor : Arlino Henrique Magalhães de Araújo
// Aluno : Rogério de Lima Sousa
// Disponível no repositório do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
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