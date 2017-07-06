#include <conio.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	int data, ano, mes, dia;
	
	printf("Digite a data no formato ddmmaa\n");
	scanf("%d", &data);
	
	dia = data / 10000;	
	data = data % 10000;	
	mes = data / 100;
	ano = data % 100;
		
	printf("Dia: %d\n", dia);
	printf("Mes: %d\n", mes);	
	printf("Ano: %d\n", ano);
	
	return 0;
}