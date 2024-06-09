#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int matriz[4][5], somalinha[4], stotal = 0, i, j;
    srand(time(0));
    // Valores da matriz e somalinha.
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 10;
        }
        somalinha[i] = 0;
    }
    // somador dos elementos de cada linha da matriz e dos elementos do vetor
    printf("A soma das linhas da matriz vale: \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            somalinha[i] += matriz[i][j];
        }   
        printf("%d => ", somalinha[i]);
        stotal += somalinha[i];
    }
    printf("Fim\n");
    printf("A soma total vale: %d", stotal);

    return 0;
}