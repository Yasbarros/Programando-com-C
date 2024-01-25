

#include <stdio.h>

int main()
{
    int d, i;
    float v, s, soma, diferenca;
        soma = 0;
        printf("Digite seu salario: ");
        scanf("%f", &s);
        printf("Digite a quantidade de despesas fixas por mês: ");
        scanf("%i", &d);
        for(i=0;i<d; i++){
            printf("Valor de cada despesa: ");
            scanf("%f", &v);
            soma += v;
        }
        diferenca = s - soma;
        if(diferenca < 0){
            printf("reduzir despesas");
        }else{
            printf("Diferença do salario menos despesas: %0.f", diferenca);
        }
        
        

    return 0;
}
