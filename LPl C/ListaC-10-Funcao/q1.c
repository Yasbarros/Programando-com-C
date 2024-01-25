

#include <stdio.h>]

int main()
{
    int a,b,c;
    printf("Digite o lado a: ");
    scanf("%i", &a);
    printf("Digite o lado b: ");
    scanf("%i", &b);
    printf("Digite o lado c: ");
    scanf("%i", &c);
    int tipoTriangulo(int x, int y, int z);
    tipoTriangulo(a, b, c);
    return 0;
}

int tipoTriangulo(int l1, int l2, int l3){
    if (l1 == l2 && l2 == l3) {
        printf("O triângulo é equilátero.\n");
    } else if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }
}

