

#include <stdio.h>


int main()
{
    int ano, dias, semana;
    printf("Digite sua idade em dias: ");
    scanf("%i", &dias);
    
    ano = dias/365;
    semana = 48 * ano;
    dias = ano * 365;
    printf("Sua idade é: %i\n", ano);
    printf("Quantidade de semanas: %i\n", semana);
    printf("Quantidade de dias é: %i\n", dias);
    

    return 0;
    
}
