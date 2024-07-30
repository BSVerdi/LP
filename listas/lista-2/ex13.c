#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// substituicao de elementos em um vetor

int main() {
    int vetor[5], i, elemento, substituto;
    srand(time(0));
    printf("[ ");
    for(i=0; i<5; i++) {
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }
    printf("]\nQual elemento acima deseja substituir? ");
    scanf("%d", &elemento);
    printf("Por qual elemento deseja substituir? ");
    scanf("%d", &substituto);
    printf("[ ");
    for(i=0; i<5; i++) {
        if (vetor[i] == elemento) {
            vetor[i] = substituto;
        }
        printf("%d ", vetor[i]);
    }
    printf("]");

    return 0;
}