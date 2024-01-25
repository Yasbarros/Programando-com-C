

#include <stdio.h>

int main()
{
    int n;
    
    
    while(n>=0 && n<10){
        printf("Digite sua nota final: ");
        scanf("%i", &n);
        if(n >= 7){
        printf("APROVADO! \n");
        }else if(n>=4){
            printf("EM EXAME \n");
        }else{
            printf("REPROVADO. \n");
        }
    }

    return 0;
}
