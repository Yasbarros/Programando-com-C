

#include <stdio.h>

int main()
{
    float vp, vt, vm;
    
    printf("Digite a velocidade máxima permitida: ");
    scanf("%f", &vp);
    
    printf("Digite a velocidade na qual o veículo trafegava: ");
    scanf("%f", &vt);
    
    if(vt <= vp){
        printf("Não tem multa");
    }else{
        if(vt > (vm = vp + (vp*0.20))){
            printf("Leva multa de R$750");
        }else{
            if(vt >= vp){
                printf("Leva multa de R$250");
            }
        }
    }
    


    return 0;
}