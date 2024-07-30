#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// verificacao da ordem de um vetor

int main() {
    int vetor[5], i, ordem = 0;
    srand(time(0));
    printf("Insira os valores em ordem crescente ou decrescente\n");
    for (i = 0; i < 5; i++) {
        printf("Insira um valor: ");
        scanf("%d", &vetor[i]);
        if (i > 0 && vetor[i - 1] < vetor[i])
            ordem = 1;
        else
            ordem = 0;
    }
    if (ordem == 1)
        printf("O vetor esta em ordem crescente.");
    else
        printf("O valor esta em ordem decrescente.");

    return 0;
}