

#include <stdio.h>

int main(){
    int i,n,c,in, v,x;
    
    int vetor [10];
    c=0;
    for(i = 0; i<5;i++){
        printf("Digite um numero: ");
        scanf("%i", &vetor[i]);
    }
    
    printf("Digite um numero de ref: ");
    scanf("%i", &x);
    
    for(i =0;i<5;i++){
        if(vetor[i]<x){
            vetor[i]=x;
        }
    }
    printf("{");
    for(i =0;i<5;i++){
        
        printf("%i", vetor[i]);
    }
    printf("}");
    return 0;
}
