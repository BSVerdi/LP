#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// contagem dos elementos pares de um vetor aleatorio

int main() {
    int pares = 0, v[10];
    srand(time(0));
    printf("[ ");
    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 10;
        if (v[i] % 2 == 0)
            pares += 1;
        printf("%d ", v[i]);
    }
    printf("]\n");
    printf("O vetor acima possui %d elementos pares.", pares);

    return 0;
}