
#include <stdio.h>


int main(){
    
   int vetor [5] = {1,2,3,4,5};
   
   int *ponteiro = vetor; 
   
   for(int i=0;i<5;i++){
       printf("%i", *(ponteiro+i) * 2);
   }
   
    return 0;
}

