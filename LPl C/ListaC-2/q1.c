/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float p,c;
    printf("Digite um valor de comprimento em polegadas: ");
    scanf("%f", &p);
    c = (2.54*p);
    
    printf("O valor convertido para centímentros é: %f", c);
    
    return 0;
    
}
