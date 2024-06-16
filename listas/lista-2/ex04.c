#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// calculo da media dos elementos de um vetor

int main() {
    float media = 0; 
    int v[10];
    srand(time(0));
    printf("[ ");
    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 10;
        media += v[i];
        printf("%d ", v[i]);
    }
    printf("]\n");
    printf("Analisando o vetor acima...\n");
    printf("A media dos elementos do vetor e %.2f", media / 10);

    return 0;
}