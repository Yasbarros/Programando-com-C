#include <stdio.h>

int main()
{
    float d,v;
    printf("Digite a quantidade de dias trabalhados: \n");
    scanf("%f", &d);
    
    v= (30*d) - (0.08* (30*d));
    
    printf("O valor a ser pago é: R$%f\n", v);

    return 0;
}
