

#include <stdio.h>

int main()
{
    int v;
    int resultado;
    printf("Digite um valor: ");
    scanf("%i", &v);
    int Epar(int x);
    Epar(v);
    
    resultado = Epar(v);
    if (resultado == 1){
        printf("Verdadeiro");
    }else{
        printf("Falso");
    }

    return 0;
}

int Epar(int valor){
    if (valor % 2 == 0) {
        return 1;
    }else {
        return 0;
    }
}
