#include <stdio.h>
int main()
{
    float a, b, c, x, fx;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    fx = a*x*x + b*x + c;

    printf("A funcao f(%f) = %f", x, fx);

    return 0;
}
