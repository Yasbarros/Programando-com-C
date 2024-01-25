

#include <stdio.h>

int main()
{
    int n, n2, i, maior;
    
    maior=0;
    
    for (i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%i", & n);
        if(n > maior){
            maior = n;
        }
    }
    
    printf("O maior numero é: %i", maior);

    return 0;
}
