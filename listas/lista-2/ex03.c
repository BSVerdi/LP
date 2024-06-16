#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// soma dos elementos de um vetor gerado aleatoriamente

int main() {
    int v[10], soma = 0;
    srand(time(0));
    printf("[ ");
    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 10;
        soma += v[i];
        printf("%d ", v[i]);
    }
    printf("]\n");
    printf("A soma dos elementos do vetor acima e %d", soma);

    return 0;
}