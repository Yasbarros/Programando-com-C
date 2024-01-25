#include <stdio.h>
#include <string.h>

#define MAX_CAPACITACOES 5
#define MAX_NOME 50
#define MAX_NOME_CAPACITACAO 20


void Cadastro() {
    char nome[MAX_NOME];
    char funcao[MAX_NOME];
    int numCapacitacoes;
    char capacitacoes[MAX_CAPACITACOES][MAX_NOME_CAPACITACAO];

    printf("Cadastro de Funcionário\n");

    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  

    printf("Digite a sua função na empresa: ");
    fgets(funcao, sizeof(funcao), stdin);
    funcao[strcspn(funcao, "\n")] = '\0';  

    printf("Digite quantas capacitações você realizou: ");
    scanf("%d", &numCapacitacoes);
    getchar();  

    printf("Digite o nome de cada capacitação:\n");
    for (int i = 0; i < numCapacitacoes; i++) {
        printf("Capacitação %d: ", i + 1);
        fgets(capacitacoes[i], sizeof(capacitacoes[i]), stdin);
        capacitacoes[i][strcspn(capacitacoes[i], "\n")] = '\0';  
    }

    printf("\nInformações do Funcionário:\n");
    printf("Nome: %s\n", nome);
    printf("Função: %s\n", funcao);
    printf("Capacitações:\n");
    for (int i = 0; i < numCapacitacoes; i++) {
        printf("- %s\n", capacitacoes[i]);
    }
}

int main() {
    Cadastro();
    return 0;
}