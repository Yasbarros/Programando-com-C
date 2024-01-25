
#include <stdio.h>
int trocar(int *a, int *b){
    int c;
     c = *a;
    *a = *b;
    *b = c;

    return 0;
}




int main(){
    
    int n=10;
    int n2 = 50;
    
    trocar(&n,&n2);
    
    printf("Novo Valor A: %i\n", n);
    printf("Novo Valor B: %i\n", n2);
    
    return 0;
}
