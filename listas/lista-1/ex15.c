#include<stdio.h>
// os n primeiros numeros da sequencia de fibonacci

int main() {
    int n, fib = 1, antecessor_1 = 1, antecessor_2 = 0;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d => ", fib);
        fib = antecessor_1 + antecessor_2;
        antecessor_2 = antecessor_1;
        antecessor_1 = fib;
    }
    printf("FIM");

    return 0;
}