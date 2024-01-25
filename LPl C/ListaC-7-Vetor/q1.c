

#include <stdio.h>

int main(){
    int i, maior;
    int vetor [10];
    maior= vetor[0];
    for(i = 0; i<5;i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i<5;i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    }
    printf("O maior numero: %d", maior);
    
    return 0;
}
