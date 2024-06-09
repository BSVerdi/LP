#include<stdio.h>
// calculo da soma dos n numeros naturais

int main() {
    int n, soma = 0;
    printf("Insira um valor para n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        soma += i;
    }
    printf("A soma dos %d primeiros numeros naturais e %d", n, soma);

    return 0;
}