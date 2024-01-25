

#include <stdio.h>


int main()
{
    float cf,c;
    printf("Digite o custo de fabricação de um carro: ");
    scanf("%f", &cf);
    
    c = cf + (cf*0.28)+(cf*0.45);
   
    printf("O custo do carro para o consumidor é: R$%0.f\n", c);
  
    return 0;
    
}
