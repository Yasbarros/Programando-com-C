/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,t,u;
    
    printf("\nPense em um numero de 1 ate 4 \n");
    
    printf("O numero é maior que 2? 1-sim / 2-Não\n");
    scanf("%i", &d);
    
    if(d == 1){
        printf("O numero é maior que 3? 1-sim / 2-Não \n");
        scanf("%i", &t);
        if(t == 1){
            printf("O numero que vc pensou é 4.");
        }else{
            printf("O numero que vc pensou é 3.");
        }
    }else{
        printf("O numero é maior que 1? 1-sim / 2-Não \n");
        scanf("%i", &u);
        if(u == 1){
            printf("O numero que vc pensou é 2.");
        }else{
            printf("O numero que vc pensou é 1.");
        }
    }
    
    return 0;
}
