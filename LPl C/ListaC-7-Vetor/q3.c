

#include <stdio.h>

int main(){
    int i,n;
    
    int vetor [10];
    
    for(i = 0; i<10;i++){
        printf("Digite um numero: ");
        scanf("%i", &vetor[i]);
    }
    
    for(i = 0; i<10;i++){
        if(vetor[i]%2==0){
            printf("é par o numero: %i\n", vetor[i]);
        }
    }
    
    
    return 0;
}
