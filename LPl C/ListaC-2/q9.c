#include <stdio.h>

int main()
{
    float p, ap1, ap2, ap3, por1, por2, por3, total, pre1, pre2, pre3;
    printf("Digite o valor do premio: \n");
    scanf("%f", &p);
    
    printf("Digite o valor investido pelo apostador 1: \n");
    scanf("%f", &ap1);
    
    printf("Digite o valor investido pelo apostador 2: \n");
    scanf("%f", &ap2);
    
    printf("Digite o valor investido pelo apostador 3: \n");
    scanf("%f", &ap3);
    
    total = ap1+ap2+ap3;
    por1 = ap1 * 100 / total;
    por2 = ap2 * 100 / total;
    por3 = ap3 * 100 / total;
    
    pre1= p * por1/100;
    pre2= p * por2/100;
    pre3= p * por3/100;
    
    printf("O apostador 1 receberá: %2.f\n", pre1);
    printf("O apostador 2 receberá: %2.f\n", pre2);
    printf("O apostador 3 receberá: %2.f\n", pre3);

    return 0;
}
