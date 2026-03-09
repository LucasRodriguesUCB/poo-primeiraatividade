/*RESPOSTA Questão 9*/


#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {

    aluno_t *aluno = (aluno_t*) malloc(sizeof(aluno_t));

    if (aluno == NULL) {
        printf("Não foi possível incluir esse aluno.\n");
        return 1;
    }

    printf("Digite o nome do aluno(somente o primeiro nome): \n");
    scanf("%s", &aluno->nome);

    printf("Digite o numero de faltas(somente numeros): \n");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota deste aluno(somente numeros): \n");
    scanf("%f", &aluno->nota);

    printf("Aluno: %s\n", aluno->nome);
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.2f\n", aluno->nota);

    if (aluno->nota >= 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    free(aluno);

return 0;
}