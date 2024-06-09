#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    typedef int matriz[3][5];
    srand(time(0));
    matriz ma, mb, soma;
    int i, j;
    // definindo os valores das matrizes
    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            ma[i][j] = rand() % 100;
            mb[i][j] = rand() % 100;
        }
    }
    // somando as matrizes
    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){ 
            soma[i][j] = ma[i][j] + mb[i][j];
        }
    }
    // print da matriz soma
    printf("A matriz soma resulta em: \n");
    for (i = 0; i < 3; i++){
        printf("[ ");
        for (j = 0; j < 5; j++){
            printf("%.3d, ", soma[i][j]);
        }
        printf("]\n");
    }

    return 0;
}