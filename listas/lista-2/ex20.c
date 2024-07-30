#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// elementos de um vetor que somados dao um valor inserido pelo usuario

int main() {
    int vetor[10], soma, i;
    srand(time(0));
    // vetor
    printf("Vetor: [ ");
    for(i=0; i<10; i++) {
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }
    printf("]\n");
    printf("Qual a soma que deseja? ");
    scanf("%d", &soma);
    // verificando os pares
    for(i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(vetor[i] + vetor[j] == soma && i != j) {
                printf("%d + %d = %d\n", vetor[i], vetor[j], soma);
            }
        }
    }

    return 0;
}