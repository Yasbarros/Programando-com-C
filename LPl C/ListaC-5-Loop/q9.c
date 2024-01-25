

#include <stdio.h>

int main()
{
    
    
    float soma, f, media;
    int i,n;
    soma = 0;
    n = -1;
         for(i = 0; i <30; i++){
             n++;
             printf("Digite a quantidade de faltas:");
             scanf("%f", &f);
            soma+= f;
            if(f <0){
                break;
            }
         }
         printf("A quantidade de alunos que quiseram participar: %i", n);
    
    media = soma/n;
    printf("\nA media de faltas: %f", media);
    
    return 0;
}
