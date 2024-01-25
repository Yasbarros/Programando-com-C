#include <stdio.h>

int main()
{
    float v, d;
    printf("Digite um valor de um produto: ");
    scanf("%f", &v);
    
    d = v -(0.12*v);
    printf("O valor do produto com desconto: %f", d);

    return 0;
}
