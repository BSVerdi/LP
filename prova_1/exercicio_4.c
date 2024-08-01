#include<stdio.h>
// matriz 4X5 somalinha
int main() {
    int matriz[4][5], somalinha[4], i, j, soma = 0;
    // definindo valores da matriz
    for(i=0; i<4; i++) {
        for(j=0; j<5; j++) {
            matriz[i][j] = j;
        }
    }
    // somando
    for(i=0; i<4; i++) {
        for(j=0; j<5; j++) {
            soma += matriz[i][j];
        }
        somalinha[i] = soma;
        soma = 0;
    }
    // imprimindo
    printf("Vetor somalinha: [ ");
    for(i=0; i<4; i++)
        printf("%d ", somalinha[i]);
    printf("]");

    return 0;
}