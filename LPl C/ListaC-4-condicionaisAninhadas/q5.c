

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,r;
    int d;
    
    printf("Digite do cachorro em kg: ");
    scanf("%f", &p);
    
    printf("Digite o peso da embalagem de ração em quilos: ");
    scanf("%f", &r);

    if(p >=21){
        d = r / 215;
        printf("A ração durará %i dias", d);
    }else{
        if(p >=16 && p <= 20){
            d = r / 170;
            printf("A ração durará %i dias", d);
        }else{
            if(p >=11 && p <= 15){
                d = r / 135;
                printf("A ração durará %i dias", d);
            }else{
                if(p >=6 && p <= 10){
                    d = r / 95;
                    printf("A ração durará %i dias", d);
                    }else{
                        d = r / 60;
                        printf("A ração durará %i dias", d);
                    }
            }
        }
    }
    
    
    /*
    Até 5 Kg 60g
    6 – 10 Kg 95g
    11 – 15 Kg 135g
    16 – 20 Kg 170g
    Acima de 21 Kg 215g
    if(p <= 5){
        d = r \ 60;
        printf("A ração durará %i dias", d);
    }
    */
    
    
    return 0;
}
