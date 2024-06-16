#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// Multiplicação de matrizes

int main() {
    int a[3][3], b[3][3], c[3][3], i, j;
    srand(time(0));
    printf("Matriz A:\n");
    for (i = 0; i < 3; i++) {
        printf("[ ");
        for (j = 0; j < 3; j++) {
            a[i][j] = rand() % 10;
            printf("%02d ", a[i][j]);
        }
        printf("]\n");
    }
    printf("Matriz B:\n");
    for (i = 0; i < 3; i++) {
        printf("[ ");
        for (j = 0; j < 3; j++) {
            b[i][j] = rand() % 10;
            printf("%02d ", b[i][j]);
        }
        printf("]\n");
    }
    printf("Multiplicando A por B obtemos:\n");
    for (i = 0; i < 9; i++) {
        c[i / 3][i % 3] = 0;
        for (j = 0; j < 3; j++) {
            c[i / 3][i % 3] += a[i / 3][j] * b[j][i % 3]; 
        }
    }
    for (i = 0; i < 3; i++) {
        printf("[ ");
        for (j = 0; j < 3; j++)
            printf("%02d ", c[i][j]);
        printf("]\n");
    }

    return 0;
}