

#include <stdio.h>

int main()
{
    float n1, n2, media;
    
    printf("Digite a nota da prova 1: ");
    scanf("%f", &n1);
    
    printf("Digite a nota da prova 2: ");
    scanf("%f", &n2);
    
    media = n1 + n2 / 2;
    
    if(media >=7)
        printf( "Parabéns, você está aprovado! :D");
    else
        printf( "Você foi reprovado! :(");
    

    return 0;
}
