#include<stdio.h>

void transpormatriz(int matriz[][100], int linhas, int colunas) {
    int transposta[colunas][linhas];

    for(int i=0; i<colunas; i++) {
        for(int j=0; j<linhas; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }
    for(int i=0; i<colunas; i++) {
        for(int j=0; j<linhas; j++) {
            printf("%d", transposta[i][j]);
        }
    }
}

int main() {
    int linhas, colunas;
    scanf("%d%d", &linhas, &colunas);
    int matriz[linhas][colunas];

    for(int i=0; i<linhas; i++) {
        for(int j=0; j<colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    transpormatriz(matriz, linhas, colunas);

    return 0;
}