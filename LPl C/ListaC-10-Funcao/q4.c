

#include <stdio.h>

int main()
{
    float v;
    
    printf("Digite um valor decimal: ");
    scanf("%f", &v);
    float aproximaNumero(float x);
    aproximaNumero(v);
    

    return 0;
}

float aproximaNumero(float valor){
    int valorInt;
    valorInt = (int)(valor + 0.5);
        printf("o valor aproximado: %i\n", valorInt);
    
}

