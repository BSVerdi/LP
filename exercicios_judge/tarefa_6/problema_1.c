#include<stdio.h>

int main() {
    int matriz[30][30], i, j, dimensao_x, dimensao_y, contagem = 0;
    scanf("%d%d", &dimensao_x, &dimensao_y);
    for(i=0; i<dimensao_y; i++) {
        for(j=0; j<dimensao_x; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    // analise das frequencias
    for(int valor=0; valor<=100; valor++) {
        for(i=0; i<dimensao_y; i++) {
            for(j=0; j<dimensao_x; j++) {
                if(valor == matriz[i][j]) {
                    contagem += 1;
                }
            }
        }
        if(contagem > 0) {
            printf("%d %d\n", valor, contagem);
            contagem = 0;
        }
    }

    return 0;
}