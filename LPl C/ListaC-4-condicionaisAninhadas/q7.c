

#include <stdio.h>

int main()
{
    
    float n1, n2, c;
    
    int o;
   

    printf("\nDigite um valor: ");
    scanf ("%f",&n1);
    printf("\nDigite um valor: ");
    scanf ("%f",&n2);
    
    printf("\nEscolha uma operação matematica: 1- soma / 2- subtração / 3- multiplicação / 4- divisão");
    scanf ("%i",&o);
    
    if (o == 1){
        c = n1 + n2;
        printf("O valor da soma dos numeros: %f", c);
    }else if (o == 2){
        c = n1 - n2;
        printf("O valor da subtração dos numeros: %f", c);
    }else if (o == 3){
        c = n1 * n2;
        printf("O valor da multiplicação dos numeros: %f", c);
    }else if (o == 4){
        c = n1 / n2;
        printf("O valor da divisão dos numeros: %f", c);
    }else{
        printf("Por favor escolha um numero valido.");
    }

    return 0;
}
