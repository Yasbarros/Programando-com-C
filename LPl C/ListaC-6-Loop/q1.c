#include <stdio.h>

int main()
{
    int n, i,m;
    printf("Digite um número: ");
    scanf("%i", &n);
    
    for(i=n; i>=1; i--){
        m = i-1;
        printf("%i patinhos foram passear\nAlém das montanhas \nPara brincar \nA mamãe gritou: Quá, quá, quá, quá \nMas só %i patinhos voltaram de lá.\n", i, m);
    }
    
    printf("\nA mamãe patinha foi procurar\nAlém das montanhas\nNa beira do mar\nA mamãe gritou: Quá, quá, quá, quá\nE os %i patinhos voltaram de lá", n);
    

    return 0;
}
