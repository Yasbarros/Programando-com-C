
#include <stdio.h>
#include <string.h>


char* inverteString(const char* frase) {
    int tamanho = strlen(frase);
    char* invertida = (char*)malloc((tamanho + 1) * sizeof(char)); 

    for (int i = 0; i < tamanho; i++) {
        invertida[i] = frase[tamanho - 1 - i];
    }
    invertida[tamanho] = '\0'; 

    return invertida;
}

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    
    int len = strlen(frase);
    if (frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }

    char* fraseInvertida = inverteString(frase);
    printf("Frase invertida: %s\n", fraseInvertida);

   
    free(fraseInvertida);

    return 0;
}


