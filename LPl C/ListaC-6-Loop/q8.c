

#include <stdio.h>

int main()
{
    int lado, n, i, m;
    char  v[20];
    printf("Digite o lado do quadrado: ");
    scanf("%i", & lado);
    
    i = 0;
    
    for (i>=1;i<lado;i++){
        for(n>=1; n<lado; n++){
        v[n]= '*';
        }
        printf("\n%s", v);
    }
    
    return 0;
}
