#include <stdio.h>

int main()
{
    float r, d;
    printf("Digite um valor em real: ");
    scanf("%f", &r);
    
    d = 5.05*r;
    printf("O valor em dolar é: %f", d);

    return 0;
}
