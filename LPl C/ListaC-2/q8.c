#include <stdio.h>

int main()
{
    float ad, au, d;
    printf("Digite a altura do degrau em centimetros: \n");
    scanf("%f", &ad);
    
    printf("Digite a altura desejada a ser alcançada em metros: \n");
    scanf("%f", &au);
    
    d = ad*100/au;
    
    printf("A quantidade de degraus a ser subida para alcançar a altura desejada é: %0.f\n", d);
    
    return 0;
}
