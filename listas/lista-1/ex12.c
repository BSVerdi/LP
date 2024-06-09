#include<stdio.h>
// soma dos numeros pares até 100

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    printf("A soma dos numeros pares ate 100 vale: %d", soma);

    return 0;
}