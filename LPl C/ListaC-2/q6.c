#include <stdio.h>

int main()
{
    float sb, s;
    printf("Digite o seu salário base: \n");
    scanf("%f", &sb);
    
    s= (sb + (0.05 * sb)) - (0.07*sb);
    
    printf("O salário a receber é: R$%f\n", s);

    return 0;
}
