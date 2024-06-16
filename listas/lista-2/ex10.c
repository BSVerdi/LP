#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// remoção de elementos duplicados

int main() {
    int v[10], i;
    printf("[ ");
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 10;
        printf("%d ", v[i]);
    }
    printf("]\n");
    printf("Apos remover os elementos duplicados do vetor acima:\n");
    printf("[ ");
    for (i = 0; i < 10; i++) {
        for (int c = 0; c < 10; c++) {
            if (v[i] == v[c] && i != c) {
                v[c] = -1;
            }
        }
        if (v[i] != -1)
            printf("%d ", v[i]);
    }
    printf("]\n");

    return 0;
}