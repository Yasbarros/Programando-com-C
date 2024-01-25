#include <stdio.h>

int main ()
{
    int n1, n2, maior1, maior2, vetor[5];
    n1 = 0;
    maior1 = 0;
    maior2 = 0;
    while (n1<5) {
    n1++;
    printf("Informe um número inteiro positivo: ");
    scanf ("%i",&n2);
    
      if(n2 > maior1){
            if(maior1> maior2){
                maior2=maior1;
            }
            maior1=n2;
      }
      else if(n2>maior2){
          maior2 = n2;
      }
    }
    printf("O maior numero: %i\n", maior1);
    printf("O segundo maior numero: %i", maior2);
  return 0;
}