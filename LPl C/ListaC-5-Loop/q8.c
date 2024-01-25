

#include <stdio.h>

int main()
{
    
    
    float nota, media, soma, por_nota7, por_nota4, por_notaMenor;
    int n, nota_7, nota_4, nota_menor;
    n = 0;
    soma = 0;
    media= 0;
    while(n<50){
        n++;
        printf("Digite sua nota: ");
        scanf("%f", &nota);
        if(nota>=7){
            nota_7 ++;
        }else if(nota>=4 && nota<7){
            nota_4++;
        }else{
            nota_menor++;
        }
        soma+= nota;
    }
    
    media = soma/50;
    por_nota7 = (nota_7 * 100)/50;
    por_nota4 = (nota_4 * 100)/50;
    por_notaMenor = (nota_menor * 100)/50;
    printf("A media da turma: %f\n", media);
    printf("\nPorcetagem de alunos com nota maior que 7:  %0.f%%", por_nota7);
    printf("\nPorcetagem de alunos com nota entre 4 e 7:  %0.f%%", por_nota7);
    printf("\nPorcetagem de alunos com nota menor que 4:  %0.f%%", por_nota7);

    return 0;
}
