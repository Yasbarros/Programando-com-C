

#include <stdio.h>

int main()
{
    float s, sd;
    
    printf("Digite o valor do seu salário base: ");
    scanf("%f", &s);
    
    if(s > 1499){
        sd = s - (s*0.27); 
        printf("Desconto de 27%% no valor. Valor a receber: R$%0.f", sd);
    }else if (s > 999 && s <=1499){
        sd = s - (s*0.15);
        printf("Desconto de 15%% no valor. Valor a receber: R$%0.f", sd);
    }else{
        printf("Não serão cobrados impostos. O valor a receber: R$%0.f", s);
    }
    

    return 0;
}
