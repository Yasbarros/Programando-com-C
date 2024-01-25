

#include <stdio.h>

int main()
{
    int n, cont, i;
    printf("Digite um numero: ");
    scanf("%i", &n);
    
    cont = 0;
    for(i=1; i<=n; i++){
        if(n%i == 0){
            cont++;
        }
    }
    if(cont == 2){
        printf("O numero é primo.");
    }else{
        printf("Não é primo.");
    }

    return 0;
}
