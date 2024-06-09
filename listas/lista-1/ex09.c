#include<stdio.h>
// maior valor entre 3 numeros

int main() {
    int num, maior = 0;
    for (int i = 1; i <= 3; i++) {
        printf("Insira o numero %d: ", i);
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
    }
    printf("O maior numero inserido e %d", maior);

    return 0;
}