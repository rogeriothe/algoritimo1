#include <stdio.h>
// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
int main(int argc, char** argv)
{
	float valor_compra, valor_venda;
	printf("Digite o valor de compra:\n");
	scanf("%f", &valor_compra);
	
	
	if(valor_compra < 20.00)
	{
		valor_venda = valor_compra * 1.45;
	   	printf("Valor de venda: %f", valor_venda);		
	}
	else
	{
		valor_venda = valor_compra * 1.30;
	   	printf("Valor de venda: %f", valor_venda);
	}
	
	return 0;
}