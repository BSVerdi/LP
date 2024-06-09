#include<stdio.h>
// verificador de valores pares

int main() {
    int num;
    printf("Insira um valor: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("O valor inserido e par");
    } else {
        printf("O valor inserido e impar");
    }

    return 0;
}