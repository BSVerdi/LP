#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// intercalação de dois vetores em um

int main() {
    int a[5], b[5], c[10], i;
    srand(time(0));
    // definição dos vetores
    printf("Vetor A; [ ");
    for (i = 0; i < 5; i++) {
        a[i] = rand() % 10;
        printf("%d ", a[i]);
    }
    printf("]\n");
    printf("Vetor B; [ ");
    for (i = 0; i < 5; i++) {
        b[i] = rand() % 10;
        printf("%d ", b[i]);
    }
    printf("]\n");
    // intercalação dos vetores em um
    printf("Vetor C: [ ");
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0)
            c[i] = a[i / 2];
        else
            c[i] = b[i / 2];
        printf("%d ", c[i]);
    }
    printf("]");

    return 0;
}