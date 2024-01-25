#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Foi realizado um concurso onde a importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.\n");
    
    a= 780 * 0.46;
    b= 780 * 0.32;
    c= 780 * 0.22;
    
    printf("O primeiro ganhador receberá 46%% do valor: %f\n", a);
  
    printf("O segundo ganhador receberá 32%% do valor: %f\n", b);
    
    printf("O terceiro ganhador receberá 22%% do valor: %f\n", c);

    return 0;
}
