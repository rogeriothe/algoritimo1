#include <stdio.h>

int main(int argc, char** argv)
{
	const float rend = 12;
	float velocidade, tempo, distancia, combustivel;
	
	printf("Digite a velocidade em km por horas\n");
	scanf("%f", &velocidade);

	printf("Digite o tempo em horas\n");
	scanf("%f", &tempo);
	
	distancia = velocidade * tempo;
	
	combustivel = distancia / rend;
	
	printf("A distancia percorrida %f Km\n", distancia);	
	printf("Sera consumido %f Litros de combustivel\n", combustivel);
		
	return 0;
}