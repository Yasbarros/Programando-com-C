/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int n1, n2;

    printf("\nDigite um números: ");
    scanf ("%i",&n1);
    
    printf("\nDigite um números: ");
    scanf ("%i",&n2);
    
    if (n1 % n2 == 0){
        printf ("É divisor perfeito");
    }else {
        printf("Não é dividor perfeito");
    }
    

    return 0;
}
