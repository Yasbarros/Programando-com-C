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
