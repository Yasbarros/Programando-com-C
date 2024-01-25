

#include <stdio.h>

int main(){
    int i,n;
    float  maior;
    float vetor [10];
    maior= vetor[0];
    for(i = 0; i<10;i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }
    printf("Digite um numero de elemenos a considerar:");
    scanf("%i",& n);
    for(i = 0; i<n;i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    }
    printf("O maior numero dos %i primeiros numeros é: %0.f", n,maior);
    
    return 0;
}
