#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// adicao de um elemento em um vetor organizado

int main() {
    int vetor[11], i, aux = 0;
    srand(time(0));
    // criacao do vetor
    for(i=0; i<10; i++)
        vetor[i] = rand() % 10;
    //vetor organizado
    for(i=0; i<10; i++) {
        for(int j=0; j<9; j++) {
            if(vetor[j] > vetor[j+1]) {
                aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux; 
            }
        }
    }
    printf("vetor: [ ");
    for(i=0; i<10; i++)
        printf("%d ", vetor[i]);
    printf("]\n");
    printf("Insira o valor que deseja inserir: ");
    scanf("%d", &vetor[10]);
    for(i=0; i<11; i++) {
        for(int j=0; j<11; j++) {
            if(vetor[j] > vetor[j+1]) {
                aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
            }
        }    
    }

    printf("Vetor: [ ");
    for(i=0; i<11; i++)
        printf("%d ",vetor[i]);
    printf("]");

    return 0;
}