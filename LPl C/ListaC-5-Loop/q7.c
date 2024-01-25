
#include <stdio.h>

int main()
{
    int i, n, itens, soma, c20;
    float v, cm, media,p20;
    
    printf("Digite o numero de pedidos vinculados: ");
    scanf("%i", & n);
    
    cm = 0;
    soma = 0;
    c20 = 0;
    media = 0;
    p20 = 0;
    
    for(i=1; i<=n; i++){
        printf("Digite a quantidade de itens vendidos do pedido %i: ", i);
        scanf("%i", & itens);
        printf("Digite o valor total dos pedidos: ");
        scanf("%f", & v);
        
        soma+= itens;
        
        if(itens < 20){
            cm += 10 * (v/100);
            c20++;
        }else if(itens >= 20 && itens <=49){
            cm+= 15 * (v/100);
        }else if(itens >= 50 && itens <=74){
            cm+= 20 * (v/100);
        }else{
            cm+= 25 * (v/100);
        }
    }
    
    media = soma/n;
    p20 = (c20*100)/n;
    printf("\nA media de itens: %f", media);
    printf("\nA porcetagem de pedidos com menos de 20 itens: %f", p20);
    printf("\nA soma das comissões: %f", cm);
    return 0;
}
