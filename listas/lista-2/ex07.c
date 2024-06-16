#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// concatenação de vetores

int main() {
    int a[5], b[5], c[10], i;
    srand(time(0));
    // definição dos vetores
    printf("Vetor A: [ ");
    for (i = 0; i < 5; i++) {
        a[i] = rand() % 10;
        printf("%d ", a[i]);
    }
    printf("]\n");
    printf("Vetor B: [ ");
    for (i = 0; i < 5; i++) {
        b[i] = rand() % 10;
        printf("%d ", b[i]);
    }
    printf("]\n");
    // concatenação
    printf("Vetor contatenado C: [ ");
    for (i = 0; i < 10; i++) {
        if (i < 5) 
            c[i] = a[i];
        else
            c[i] = b[i - 5];
        printf("%d ", c[i]);
    }
    printf("]\n");

    return 0;
}