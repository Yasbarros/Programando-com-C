

#include <stdio.h>

int main()
{
    float temp;
    
    printf("Digite a temperatura do corpo do paciente: ");
    scanf("%f", &temp);
    
    if(temp >37){
        printf("O paciente está com febre! :(");
    }else{
        printf("A temperatura do paciente está normal! :D");
    }

    return 0;
}
