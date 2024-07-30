#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// direcionamento de um vetor

int main() {
    int vetor[10], i, decisao;
    srand(time(0));
    // definindo os valores do vetor
    printf("[ ");
    for (i = 0;i < 10; i++) {
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }
    printf("]\n");
    printf("Insira para qual direcao deseja virar o vetor:\n");
    printf("[1] - Direita\n[2] - Esquerda\n");
    scanf("%d", &decisao);
    printf("[ ");
    for (i = 0; i < 10; i++) {
        if (decisao == 1) {
            printf("%d ", vetor[i]);
        } else {
            printf("%d ", vetor[9 - i]);
        }
    }
    printf("]");

    return 0;
}