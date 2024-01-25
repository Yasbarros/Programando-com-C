/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int v, n100, n50, n10, n5, n1;

    printf("Digite um valor em reais: ");
    scanf("%d", &v);

    n100 = v / 100;
    v = v % 100;

    n50 = v / 50;
    v = v % 50;

    n10 = v / 10;
    v = v % 10;

    n5 = v / 5;
    v = v % 5;

    n1 = v;

    printf("O valor pode ser decomposto em:\n");
    printf("%d de 100\n", n100);
    printf("%d de 50\n", n50);
    printf("%d de 10\n", n10);
    printf("%d de 5\n", n5);
    printf("%d de 1\n", n1);

    return 0;
}

