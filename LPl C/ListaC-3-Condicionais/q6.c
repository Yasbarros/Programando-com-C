/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int n1;

    printf("\nDigite um números: ");
    scanf ("%i",&n1);
    
    if (n1 % 2 == 0){
        printf ("É par");
    }else {
        printf("Não é par");
    }
    

    return 0;
}
