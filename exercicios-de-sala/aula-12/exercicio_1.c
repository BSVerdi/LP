#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define M 10

int menor(int vet[], int t) {
    int m;
    if (t == 1) return vet[0];
    else {
        m = menor(vet, t-1);
        if (m<vet[t-1]) return m;
        else return vet[t-1];
    }
}


int main() {
    int vetor[M];
    
    srand(time(0));

    printf("Vetor: ");
    for(int i=0; i<10; i++) {
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
    
    printf("\nO menor valor do vetor e %d", menor(vetor, M));

    return 0;
}