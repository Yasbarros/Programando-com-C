#include <stdio.h>

int main()
{
    float v, d, cv, cp, p;
    printf("Digite o valor: \n");
    scanf("%f", &v);
    
    d = (v - (0.10*v));
    p = (v / 3);
    cv = d * 0.05;
    cp = v * 0.05;
    
    printf("O valor com desconto de 10%% é: R$%f\n", d);
    printf("O valor de cada parcela, no parcelamento de 3 × sem juros: R$%f\n", p);
    printf("A comissão do valor pago a vista: R$%f\n", cv);
    printf("A comissão do valor pago parcelado: R$%f\n", cp);
    
    return 0;
}
