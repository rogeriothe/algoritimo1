#include <stdio.h>
// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
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