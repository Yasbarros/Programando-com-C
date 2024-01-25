

#include <stdio.h>

int main(){
    int i,n,c,ini, v, fim, meio;
    
    int vetor [10];
    c=0;
    printf("Digite uma sequencia de numeros em ordem crescente abaico: \n");
    for(i = 0; i<10;i++){
        printf("Digite o numero: ");
        scanf("%i", &vetor[i]);
    }
    
    //Procurar por valor 
    printf("Digite o valor que quer encontrar no vetor: ");
    scanf("%i", &v);
    ini=0;
    meio=0;
    fim=10;
    while(ini<fim){
        meio = (ini + fim)/2;
        if(vetor[meio] == v){
            printf("Valor encontrado no indice: %i\n", meio);
            c++;
            break;
        }else if (v < vetor[meio]){
            fim = meio-1;
        }else if(v >  vetor[meio]){
            ini = meio + 1;
        }
    }
    if(c == 0){
        printf("Esse valor não existe no vetor");
    }
    

    return 0;
}

