#include <math.h>
#include <stdio.h>

int main()
{
	float num[50];
	int cont;
	float x, y;
	
	cont = 1;
	
	while(cont <= 50)
	{
		printf("Digite o %d numero\n", cont);
		scanf("%f", &num[cont]);
        x = num[cont] / 2;
        y = pow(num[cont], 1.0/3.0);
   		printf("A metade de %f numero: %f\n", num[cont], x);
        printf("A raiz cubica de %f numero: %f\n", num[cont], y);
		cont++;	
	}
}