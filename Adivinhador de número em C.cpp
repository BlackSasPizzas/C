#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, chute, tentativas = 0;

    srand(time(NULL));

    numero_secreto = rand() % 1000 + 1;

    printf("Tente adivinhar o numero (entre 1 e 1000):\n");

    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute > numero_secreto) {
            printf("Seu chute foi maior que o numero secreto.\n");
        } else if (chute < numero_secreto) {
            printf("Seu chute foi menor que o numero secreto.\n");
        } else {
            printf("Parabens! Voce acertou o numero em %d tentativas.\n", tentativas);
        }
    } while (chute != numero_secreto);

    return 0;
}

