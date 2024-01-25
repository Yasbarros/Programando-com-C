

#include <stdio.h>

int main(){
    int i,n,c,in, v,x;
    
    int a [50];
    int b [50];
    c=0;
    for(i = 0; i<5;i++){
        printf("Digite um numero para vetor a: ");
        scanf("%i", &a[i]);
    }
    
    for(i = 0; i<5;i++){
        printf("Digite um numero para vetor b: ");
        scanf("%i", &b[i]);
    }
    
    for(i =0;i<5;i++){
        a[i]=a[i]/b[i]; 
    }
    
    printf("{");
    for(i =0;i<5;i++){
        printf("%i,", a[i]);
    }
    printf("}");
    return 0;
}
