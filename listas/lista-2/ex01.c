#include<stdio.h>
// impressão inversa dos valores de um vetor lido

int main() {
    int v[5], i;
    for (i = 0; i < 5; i++) {
        printf("Insira um valor para o vetor: ");
        scanf("%d", &v[i]);
    }
    printf("Vetor com os valores inversos a leitura:\n[ ");
    for (i = 0; i < 5; i++) {
        printf("%d ", v[4 - i]);
    }
    printf("]\n");

    return 0;
}