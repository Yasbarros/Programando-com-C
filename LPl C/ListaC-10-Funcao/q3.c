#include <stdio.h>
#define MAX_ALUNOS 20

typedef struct {
    int codigo_curso;
    int idade;
} Aluno;

void lerDadosAlunos(Aluno alunos[], int *num_alunos) {
    *num_alunos = 0;
    while (*num_alunos < MAX_ALUNOS) {
        printf("Digite o código do curso (1-engenharia; 2-computação; 3-matemática; 0-encerrar): ");
        scanf("%d", &alunos[*num_alunos].codigo_curso);

        if (alunos[*num_alunos].codigo_curso == 0) {
            break;
        }

        printf("Digite a idade do aluno: ");
        scanf("%d", &alunos[*num_alunos].idade);
        (*num_alunos)++;
    }
}

void qtdAlunos(const Aluno alunos[], int num_alunos, int qtd_por_curso[]) {
    for (int i = 0; i < num_alunos; i++) {
        int codigo = alunos[i].codigo_curso;
        if (codigo >= 1 && codigo <= 3) {
            qtd_por_curso[codigo - 1]++;
        }
    }
}

int qtdAlunosFaixa(const Aluno alunos[], int num_alunos, int min_idade, int max_idade) {
    int count = 0;
    for (int i = 0; i < num_alunos; i++) {
        int idade = alunos[i].idade;
        if (idade >= min_idade && idade <= max_idade) {
            count++;
        }
    }
    return count;
}

void alunoMaisVelho(const Aluno alunos[], int num_alunos, int *curso_aluno_mais_velho, int *idade_aluno_mais_velho) {
    *curso_aluno_mais_velho = -1;
    *idade_aluno_mais_velho = -1;

    for (int i = 0; i < num_alunos; i++) {
        if (alunos[i].idade > *idade_aluno_mais_velho) {
            *curso_aluno_mais_velho = alunos[i].codigo_curso;
            *idade_aluno_mais_velho = alunos[i].idade;
        }
    }
}

float mediaIdade(const Aluno alunos[], int num_alunos, int curso) {
    int total_idade = 0;
    int qtd_alunos = 0;
    for (int i = 0; i < num_alunos; i++) {
        if (alunos[i].codigo_curso == curso) {
            total_idade += alunos[i].idade;
            qtd_alunos++;
        }
    }
    if (qtd_alunos > 0) {
        return (float) total_idade / qtd_alunos;
    } else {
        return 0;
    }
}

int main() {
    Aluno alunos[MAX_ALUNOS];
    int num_alunos = 0;
    int qtd_por_curso[3] = {0}; // Para contar alunos de cada curso (índice 0: engenharia, índice 1: computação, índice 2: matemática).

    lerDadosAlunos(alunos, &num_alunos);
    qtdAlunos(alunos, num_alunos, qtd_por_curso);

    printf("\nQuantidade de alunos por curso:\n");
    printf("Engenharia: %d\n", qtd_por_curso[0]);
    printf("Computação: %d\n", qtd_por_curso[1]);
    printf("Matemática: %d\n", qtd_por_curso[2]);

    int min_idade, max_idade;
    printf("\nDigite a idade mínima da faixa: ");
    scanf("%d", &min_idade);
    printf("Digite a idade máxima da faixa: ");
    scanf("%d", &max_idade);
    printf("Quantidade de alunos na faixa de idade: %d\n", qtdAlunosFaixa(alunos, num_alunos, min_idade, max_idade));

    int curso_aluno_mais_velho, idade_aluno_mais_velho;
    alunoMaisVelho(alunos, num_alunos, &curso_aluno_mais_velho, &idade_aluno_mais_velho);
    printf("Curso com aluno mais velho: %d (idade: %d)\n", curso_aluno_mais_velho, idade_aluno_mais_velho);

    int curso_pesquisa;
    printf("Digite o código do curso para calcular a média de idade: ");
    scanf("%d", &curso_pesquisa);
    float media = mediaIdade(alunos, num_alunos, curso_pesquisa);
    printf("Média de idade no curso %d: %.2f\n", curso_pesquisa, media);

    return 0;
}