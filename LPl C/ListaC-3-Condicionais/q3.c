

#include <stdio.h>

int main()
{
    float n1, n2;
    
    printf("Digite um valor: ");
    scanf("%f", &n1);
    
    printf("Digite um valor: ");
    scanf("%f", &n2);
    
    if(n1 > n2)
        printf( "O maior numero é: %0.f", n1);
    else
        printf( "O maior numero é: %0.f", n2);
    

    return 0;
}
