

#include <stdio.h>

int main()
{
    int c, cont, i, mte, cmp, eng, idade_20_25_cmp, idade_20_25_eng, idade_20_25_mat, maior_idade, somaMT, somaCMP, somaENG, mediaMat, mediaENG,  mediaCMP;
    mte = 0;
    cmp = 0;
    eng = 0;
    idade_20_25_cmp = 0;
    idade_20_25_eng = 0;
    idade_20_25_mat = 0;
    maior_idade = 0;
    somaMT = 0;
    somaENG = 0;
    somaCMP= 0;
    cont = 0;
    mediaCMP = 0;
    mediaENG = 0;
    mediaMat = 0;
    while(cont<=3){
        cont++;
        printf("\nDigite o numero do seu curso: 1-engenharia; 2-computação; 3-matemática \n");
        scanf("%i", &c);
        printf("\nDigite a sua idade: \n");
        scanf("%i", &i);
        if(c == 1){
            eng++;
            somaENG+= i;
            if(i >=20 && i<=25){
            idade_20_25_eng++;
            }
        }else if (c == 2){
            cmp++;
            somaCMP+= i;
            if(i >=20 && i<=25){
            idade_20_25_cmp++;
            }
        }else if (c == 3){
            mte++;
            somaMT+= i;
            if(i >=20 && i<=25){
            idade_20_25_mat++;
            }
        }else{
            printf("\nnumero de curso invalido\n");
        }
        
        if(i > maior_idade){
            maior_idade = i;
            printf("\nmaior idade: %i do curso %i\n", maior_idade, c);
        }
    }
    mediaMat = somaMT / mte;
    mediaENG = somaENG / eng;
    mediaCMP = somaCMP / cmp;
    
    if(mediaCMP < mediaENG && mediaCMP < mediaMat){
        printf("\nA menor media de idade é do curso de computação");
    }else if(mediaCMP > mediaENG && mediaENG < mediaMat){
        printf("\nA menor media de idade é do curso de engenharia");
    }else if (mediaMat < mediaENG && mediaMat < mediaCMP){
        printf("\nA menor media de idade é do curso de matematica");
    }
    
    printf("\nA quantidade de alunos do curso de matematica com idade entre 20 e 25 anos é: %i", idade_20_25_mat);
    printf("\nA quantidade de alunos do curso de engenharia com idade entre 20 e 25 anos é: %i", idade_20_25_eng);
    printf("\nA quantidade de alunos do curso de computação com idade entre 20 e 25 anos é: %i", idade_20_25_cmp);
    
    return 0;
}
