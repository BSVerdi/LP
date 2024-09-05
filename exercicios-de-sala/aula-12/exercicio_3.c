#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define M 3

float media(int vetor[], int t) {
    float m = 0;
    if (t==1) return vetor[0];
    else {
        m = media(vetor, t-1);
        return (vetor[t-1] + m*(t-1))/t;
    }
}


int main() {
    int vetor[M];

    for(int i=0; i<M; i++) {
        scanf("%d", &vetor[i]);        
    }

    printf("A media dos valores do vetor e %.2f", media(vetor, M));

    return 0;
}