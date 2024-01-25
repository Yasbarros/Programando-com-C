#include <stdio.h>

int main()
{
    int q, i;
    float n, soma, media;
    soma=0;
    media = 0;
    printf("Quantos alunos tem na sala: ");
    scanf("%i", &q);
    while(i<q){
        i++;
        printf("Digite a nota do aluno %i: ", i);
        scanf("%f", &n);
        soma+= n;
    }

    media = soma / q;
    
    printf("A media da sala é: %.2f", media);
    return 0;
}
