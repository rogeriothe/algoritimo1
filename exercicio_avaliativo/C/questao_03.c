#include <stdio.h>
// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
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