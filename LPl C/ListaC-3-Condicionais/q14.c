/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int s, h, m,seg;
    
    printf("Digite um valor em segundos: ");
    scanf("%i", &seg);
    
    h = seg / 3600;
    m = (seg%3600)/60;
    s = (seg%3600)%60;
    
    printf("%i:%i:%i", h,m,s);

    return 0;
}
