#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// encontrando elementos comuns em um vetor

int main() {
    int vetor_a[10], vetor_b[10], i;
    srand(time(0));
    // Vetor A
    printf("Vetor A: [ ");
    for(i=0; i<10; i++) {
        vetor_a[i] = rand() % 10;
        printf("%d ", vetor_a[i]);
    }
    printf("]\n");
    //vetor B    
    printf("Vetor B: [ ");
    for(i=0; i<10; i++) {
        vetor_b[i] = rand() % 10;
        printf("%d ", vetor_b[i]);
    }
    printf("]\n");
    // comparando os vetores
    printf("No vetor temos os seguintes elementos comuns: \n");
    for(i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(vetor_a[i] == vetor_b[j]) {
                printf("%d ", vetor_a[i]);
            }
        }
    }

    return 0;
}