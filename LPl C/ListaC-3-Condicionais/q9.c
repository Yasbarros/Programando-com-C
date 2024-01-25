/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float s, sn;
    int c;

    printf("\nDigite o seu salario: ");
    scanf ("%f",&s);
    
    printf("Digite o numero do seu cargo: 1-programador / 2-outro  \n");
    scanf("%i", &c);
    
    if (c == 1){
        sn = s + (0.30*s);
        printf("O valor do seu salario com aumento de 30%%: %f\n", sn);
    }else{
        sn=s + (0.10*s);
        printf("O valor do seu salario com aumento de 10%%: %f\n", sn);
    }
    

    return 0;
}
