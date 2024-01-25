

#include <stdio.h>

int main()
{
    
    
    float v;
    int pos, n;
    pos=0;
    n=0;
    while(n<10){
        n++;
        printf("Digite um valor: ");
        scanf("%f" , & v);
        if(v > 0){
            pos++;
        }
    }
    printf("quantidade de numeros positivos: %i", pos);
    
    return 0;
}
