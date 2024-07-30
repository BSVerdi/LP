#include<stdio.h>
// comparacao de vetores

int main() {
    int vetor_a[5], vetor_b[5], i, iguais = 0;
    for(i=0; i<10; i++) {
        if(i < 5) {
            printf("Insira um valor: ");
            scanf("%d ", &vetor_a[i]);
        } else {
            printf("Insira um valor: ");
            scanf("%d ", &vetor_b[i - 5]);
        }
    }
    // print dos vetores
    printf("vetor A: [ ");
    for(i=0 ; i<5; i++)
        printf("%d ",vetor_a[i]); 
    printf("]\n");
    printf("vetor B: [ ");
    for(i=0 ; i<5; i++)
        printf("%d ",vetor_b[i]); 
    printf("]\n");
    //comparacao dos vetores
    for(i=0; i<5; i++) {
        if(vetor_a[i] == vetor_b[i])
            iguais = 1;
        else
            iguais = 0;
    }
    if(iguais == 1)
        printf("Os vetores sao iguais.");
    else
        printf("Os vetores sao iguais.");

    return 0;
}