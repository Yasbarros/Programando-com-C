/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float p;
    
    printf("Digite seu peso em kg: ");
    scanf("%f", &p);
    
    printf("Digite sua idade: ");
    scanf("%i", &i);
    
    if(i >= 18 && i<=65){
        if(p >= 50){
            printf("Vc pode fazer doação de sangue!");
        }else{
            printf("Vc não tem peso o suficiente.");
        }
    }else{
        printf("Vc não tem idade o suficiente.");
    }
    
    return 0;
}
