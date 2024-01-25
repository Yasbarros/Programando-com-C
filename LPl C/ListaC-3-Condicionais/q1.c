

#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    if(idade >18){
        printf("Você ja pode tirar a carteira de motorista! :D");
    }else{
        printf("Você ainda não pode tirar a carteira de motorista! :(");
    }

    return 0;
}
