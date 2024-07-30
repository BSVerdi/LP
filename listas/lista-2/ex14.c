#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// valor mais frequente

int main() {
    int vetor[20], i, frequencia[2], aparicoes = 0;
    srand(time(0));
    frequencia[1] = 1;
    printf("[ ");
    for(i=0; i<20; i++) {
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }
    printf("]\n");
    for(i=0; i<20; i++) {
        for(int j=0; j<20; j++) {
            if (vetor[i] == vetor[j]) {
                aparicoes += 1;
            }
            if (aparicoes > frequencia[1]) {
                frequencia[0] = vetor[i];
                frequencia[1] = aparicoes;
            }
        }
        aparicoes = 0;
    }
    printf("O valor mais frequente e o %d, aparecendo %d vezes", frequencia[0], frequencia[1]);

    return 0;
}