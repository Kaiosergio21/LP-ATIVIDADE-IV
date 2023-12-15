#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[100];
    float nota[2];
    float media;
    char nascimento[100];
};

float somar(struct aluno a[]) {
    int i;
    float soma = 0;

    for (i = 0; i < 5; i++) {
        soma += a[i].nota[0];
    }

    return soma;
}

float calculos(float soma) {
    float media = soma / 2; 

    return media;
}

void conclusion(float media) {
    if (media >= 7) {
        printf("\nAprovado\n");
    } else {
        printf("\nReprovado\n");
    }
}

int main() {
    struct aluno a[5];
    int i, j;
    float soma = 0;
    float media = 0;

    for (i = 0; i < 5; i++) {
        printf("Nome: ");
        scanf("%s", a[i].nome);

        printf("Nascimento: ");
        scanf("%s", a[i].nascimento);

        soma = 0; 

        for (j = 0; j < 2; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &a[i].nota[j]);
            soma += a[i].nota[j];
        }

        printf("Soma: %.1f\n", soma);

        media = calculos(soma);

        printf("Média: %.1f\n", media);

        conclusion(media);
    }

    return 0;
}
