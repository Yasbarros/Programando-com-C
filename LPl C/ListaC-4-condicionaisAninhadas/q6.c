

#include <stdio.h>

int main()
{
    float s, ns;
    printf("Digite o valor do seu salario: ");
    scanf("%f", &s);
    
    if(s > 1000){
        ns = s + (s*0.03);
        printf("O reajuste do seu salario é de 3%%: %f", ns);
    }else{
        if(s >= 500 && s<=1000){
            ns = s + (s*0.08);
            printf("O reajuste do seu salario é de 8%%: %f", ns);
        }else{
            ns = s + (s*0.15);
            printf("O reajuste do seu salario é de 15%%: %f", ns);
        }
    }

    return 0;
}
