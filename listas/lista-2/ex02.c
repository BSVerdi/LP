#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// impressão do maior e menor elemento de um vetor gerado aleatoriamente

int main() {
    int i, maior, menor, v[10];
    srand(time(0));
    printf("[ ");
    for(i = 0; i < 10; i++) {
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }
    printf("]\n");
    maior = menor = v[0]; 
    for (i = 1; i < 10; i++) {
        if (v[i] > maior) 
            maior = v[i];
        if (v[i] < menor)
            menor = v[i];
    }
    printf("Analisando o vetor acima...\n");
    printf("O maior numero e %d e o menor %d", maior, menor);

    return 0;
}