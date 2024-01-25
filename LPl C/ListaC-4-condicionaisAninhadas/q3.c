/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,f;
    float a;
    
    printf("Digite sua altura: ");
    scanf("%f", &a);
    
    printf("Digite sua idade: ");
    scanf("%i", &i);
    
    printf("Digite a quantidade de idiomas falados: ");
    scanf("%i", &f);
    
    if(i >= 24){
        if(a >= 1.70){
            if(f >= 2){
                printf("Você atende aos requisitos da companhia aérea.");
            }else{
                printf("Você não atende aos requisitos de quantidade minima de idiomas da companhia aérea.");
            }
        }else{
            printf("Você não atende aos requisitos de altura da companhia aérea.");
        }
    }else{
        printf("Você não atende aos requisitos de idade da companhia aérea.");
    }
    
    /*
    - Ter idade igual ou superior a 24 anos.
    - Ter altura igual ou superior a 1.70 m.
    - Falar com fluência 2 ou mais idiomas.
    */
    return 0;
}
