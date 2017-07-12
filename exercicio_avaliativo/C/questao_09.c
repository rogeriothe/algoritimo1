#include <stdio.h>

float calcula(float salario)
{
	float desconto;
	
	
	if(salario <= 600.00)
	{
	   	return 0;		
	}
	else
	{
		if((salario > 600.00)&(salario <= 1200.00))
		{
			desconto = salario * 0.2;
			return desconto;
		}
		else
		{
			if((salario > 1200.00)&(salario <= 2000.00))
			{
				desconto = salario * 0.25;
				return desconto;
			}
			else
			{
					if(salario > 2000.00)
					{
						desconto = salario * 0.30;
						return desconto;
					}
			}	
		}
	}
	
	return 0;
}


int main(int argc, char** argv)
{
	
	int cont = 0;
	int total;

	printf("Digite o numero de funcionarios:\n");
	scanf("%d", &total);
		
	while(cont < total)
	{
		float sal, desc;
		printf("Digite o salario:\n");
		scanf("%f", &sal);
		
		desc = calcula(sal);
		printf("%f\n", desc);

		cont++;
	
	}	
		
	return 0;
}