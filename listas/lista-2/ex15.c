#include<stdio.h>
// vetor com os valores acumulados

int main() {
    int vetor_a[5], vetor_b[5], i;
    // insercao dos valortes para o vetor A
    for(i=0; i<5; i++) {
        printf("Insira um valor: ");
        scanf("%d", &vetor_a[i]);
    }
    // print do vetor
    printf("Vetor inserido: [ ");
    for(i=0; i<5; i++)
        printf("%d ", vetor_a[i]);
    printf("]\n");
    // print do vetor acumulado
    printf("Vetor acumulado: [ ");
    for(i=0; i<5; i++) {
        vetor_b[i] = vetor_a[i];
        for(int j=0; j<i; j++) {
            vetor_b[i] += vetor_a[j]; 
        }
        printf("%d ",vetor_b[i]);
    }
    printf("]\n");

    return 0;
}