#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// verificador de frequencia dos elementos de um vetor aleatorio

int main() {
    int v[10], ctg = 0, i;
    srand(time(0));
    printf("[ ");
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }
    printf("]\n");
    for (i = 0; i < 100; i++) {
        for (int c = 0; c < 10; c++) {
            if (v[c] == i)
                ctg += 1;
        }
        if (ctg != 0) {
        printf("O valor %02d aparece %d vezes.\n", i, ctg);
        ctg = 0;
        }
    }

    return 0;
}