#include<stdio.h>

int somavetor(int vetor[], int tamanho_vetor) {
    if (tamanho_vetor == 1) return (vetor[tamanho_vetor-1]);
    else return (vetor[tamanho_vetor-1] + somavetor(vetor, tamanho_vetor-1));
}


int main() {
    int vetor[5];

    for(int i=0; i<5; i++) scanf("%d", &vetor[i]);

    printf("Somavetor: %d", somavetor(vetor, 5));

    return 0;
}