

#include <stdio.h>

int main()
{
    int n, n2, i;
    printf("Digite um numero: ");
    scanf("%i", & n);
    printf("Digite um numero: ");
    scanf("%i", & n2);
    
    for (i=n; i<=n2; i++){
        if(i % 7 == 0){
            printf(" %i ",i);
        }
    }
    

    return 0;
}
