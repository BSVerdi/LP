#include<stdio.h>

#define MAX 100

void ler_matriz(int matriz[MAX][MAX], int dimensao) {
    int i, j;
    for (i=0; i<dimensao; i++)
        for(j=0; j<dimensao; j++)
            scanf("%d", &matriz[i][j]);
}


void imprimir_matriz(int matriz[MAX][MAX], int dimensao) {
    int i, j;
    for (i=0; i<dimensao; i++) {
        for (j=0; j<dimensao; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}


void matriz_quadrada(int matriz_1[MAX][MAX], int matriz_2[MAX][MAX], int dimensao) {
    int i, j;
    for(i=0; i<dimensao; i++)
        for(j=0; j<dimensao; j++)
            matriz_2[i][j] = matriz_1[i][j] * matriz_1[i][j]; 
}


void multiplicar_matriz(int matriz_1[MAX][MAX], int matriz_2[MAX][MAX], int matriz_3[MAX][MAX], int dimensao) {
    int i, j, k;
    for(i=0; i<dimensao; i++)
        for(j=0; j<dimensao; j++) {
            matriz_3[i][j] = 0;
            for(k=0; k<dimensao; k++)
                matriz_3[i][j] += matriz_1[i][k] * matriz_2[k][j];
        }
}


void traco_matriz(int matriz[MAX][MAX], int dimensao) {
    int i, traco = 0;
    for (i=0; i<dimensao; i++)
        traco += matriz[i][i];
    printf("Traco: %d", traco);
}


int main() {
    int matriz_1[MAX][MAX], matriz_2[MAX][MAX], matriz_3[MAX][MAX],dimensao;
    scanf("%d", &dimensao);
    ler_matriz(matriz_1, dimensao);
    matriz_quadrada(matriz_1, matriz_2, dimensao);
    imprimir_matriz(matriz_2, dimensao);
    multiplicar_matriz(matriz_1, matriz_2, matriz_3, dimensao);
    imprimir_matriz(matriz_3, dimensao);
    traco_matriz(matriz_3, dimensao);

    return 0;
}