#include <stdio.h>


int main()
{
    int i, n, maior;
    maior= 0;
    
    while(i<10){
        i++;
        printf("Digite um numero: ");
        scanf("%i", & n);
        if(n>maior){
            maior = n;
        }
    }
   printf("O maior numero é: %i", maior);
    return 0;
}

