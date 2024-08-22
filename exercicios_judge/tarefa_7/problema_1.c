#include<stdio.h>

void contador(int vetor[], int num) {
    int quantidade = 0, i;
    for (i=0; i<100; i++)
        if (vetor[i] == num)
            quantidade += 1;
    printf("QTD: %d", quantidade);
}


int main() {
    int vetor[100], i, num;
    //preenchendo o vetor
    for (i=0; i<100; i++)
        scanf("%d", &vetor[i]);
    // inserção do numero pedido pro usuário
    scanf("%d", &num);
    contador(vetor, num);

    return 0;
}