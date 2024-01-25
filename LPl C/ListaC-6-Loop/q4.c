#include <stdio.h>


int main()
{
    int i, n;
    printf("Digite um numero: ");
    scanf("%i", & n);
    for(i = 2; i <=n; i+=2){
        printf("\nOs numeros pares da sequencia:  %i ", i);
    }
    printf("\n                      \n");
    for(i = 1; i <=n; i+=2){
        printf("\nOs numeros ímpares da sequencia:  %i ", i);
    }
   
    return 0;
}

