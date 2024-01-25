

#include <stdio.h>

int main(){
    int i,n,c,in, v;
    
    int vetor [10];
    c=0;
    for(i = 0; i<10;i++){
        printf("Digite um numero: ");
        scanf("%i", &vetor[i]);
    }
    
    //Procurar por valor 
    printf("Digite o valor que quer encontrar no vetor: ");
    scanf("%i", &v);
    
    for(i = 0; i<10;i++){
        if(v==vetor[i]){
            printf("Valor encontrado no indice: %i\n", i);
            c++;
            break;
        }
    }
    if(c == 0){
        printf("Esse valor não existe no vetor");
    }
    

    return 0;
}
