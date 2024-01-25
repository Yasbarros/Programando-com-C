
#include <stdio.h>

int main(){
    
    int n=10;
    float n2=10.50;
    char p = 'Y';
    
    int *ponteiroInt = &n;
    float *ponteiroFloat = &n2;
    char *ponteiroChar = &p;
    
    
    
    printf("Valor inicial: %i\n", *ponteiroInt);
    printf("Valor inicial: %f\n", *ponteiroFloat);
    printf("Valor inicial: %c\n", *ponteiroChar);
    
    *ponteiroChar = 'B';
    *ponteiroFloat = 5.65;
    *ponteiroInt  = 22;
    
    printf("\nNovo Valor: %i\n", *ponteiroInt);
    printf("Novo Valor: %f\n", *ponteiroFloat);
    printf("Novo Valor: %c\n", *ponteiroChar);

    return 0;
}
