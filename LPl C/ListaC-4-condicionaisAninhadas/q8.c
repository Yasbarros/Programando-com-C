

#include <stdio.h>

int main()
{
    float a, p, imc;
    
    printf("Digite a sua altura: ");
    scanf("%f", &a);
    
    printf("Digite o seu peso: ");
    scanf("%f", &p);
    
    imc = p/(a*2);
    if (imc > 30){
    printf ("\n Você está obeso! Procure um tratamento urgente.");
    }else {
    printf("\n Você não é obeso.");
    }

    return 0;
}