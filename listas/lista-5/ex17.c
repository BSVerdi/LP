#include<stdio.h>

#define MAX 100

int ordenado(int numeros[], int tamanho_numeros) {
    if (tamanho_numeros == 1) return 1;
    else if (numeros[tamanho_numeros-1] >= numeros[tamanho_numeros-2])
        return (ordenado(numeros, tamanho_numeros-1));
    else return 0;
}


int main() {
    int numeros[MAX], quantidade, valido=0;

    printf("Insira a quantidade de numeros que deseja inserir: ");
    scanf("%d", &quantidade);

    for (int i=0; i<quantidade; i++) scanf("%d", &numeros[i]);

    valido = ordenado(numeros, quantidade);

    if (valido) printf("O vetor esta ordenado.");
    else printf("O vetor nao esta ordenado.");
    
    return 0;
}