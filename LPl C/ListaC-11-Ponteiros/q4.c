
#include <stdio.h>


int main(){
    
   
   int n;
   printf("Digite o tamanho do vetor: ");
   scanf("%i",& n);
   int vetor [n];
   
   
   
   int *ponteiro = vetor; 
   
   for(int i=0;i<n;i++){
       printf("Digite o valor %i: ", i);
       scanf("%i",& vetor[i]);
   }
   for(int i=0;i<n;i++){
       printf("%i,", vetor[i]);
   }
   
    return 0;
}
