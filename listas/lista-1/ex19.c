#include<stdio.h>
// contagem de digitos de um numero

int main() {
    int num, ctg = 1;
    printf("Insira um valor: ");
    scanf("%d", &num);
    while (num > 1) {
        num /= 10;
        ctg += 1;
    }
    printf("O valor inserido contem %d digitos", ctg);

    return 0;
}