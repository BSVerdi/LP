#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define M 10

int soma(int vet[], int t) {
    if (t==1) 
        return vet[0];
    else
        return (vet[t-1] + soma(vet, t-1));
}


int main() {
    int vetor[M];

    srand(time(0));

    printf("Vetor: ");
    for(int i=0; i<M; i++) {
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }

    printf("\nA soma dos valores do vetor e %d", soma(vetor, M));

    return 0;
}