#include <stdio.h>

int main()
{
    
    int i, n, v,m,d,b,sb,j, so,k;
    printf("Digite um numero: ");
    scanf("%i", & n);
    j=n;
    
    printf("-----Multi------\n");
    for(i=0; i<=10; i++){
        v = n * i;
        printf("%i x %i = %i\n",i,n, v);
        
    }
    printf("-----Divis------\n");
    while(m<10){
        m++;
        b=(m*n);
        d = (b/n);
        printf("%i / %i = %i\n",b,n, d);
    }
    
    printf("-----Subt------\n");
    while(j<10+n){
        j++;
        sb = j - n;
        printf("%i - %i = %i\n",j,n,sb);
    }
    
    printf("-----Soma------\n");
    while(k<10){
        k++;
        so= k + n;
        printf("%i + %i = %i\n",k,n,so);
    }
    return 0;
}
