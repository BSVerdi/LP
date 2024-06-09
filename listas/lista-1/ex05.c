#include<stdio.h>
// calculo do fatorial de um numero inserido

int main() {
    int num, fat = 1;
    printf("Insira um valor: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        fat *= i;
    }
    printf("O fatorial de %d e %d.", num, fat);

    return 0;
}