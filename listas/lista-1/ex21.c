#include<stdio.h>
// classificação de triangulos

int main() {
    int a, b, c;
    printf("Insira os lados A, B, C em ordem decrescente: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b + c && b < c + a && c < a + b) {
        if (a * a == b * b + c * c) {
            printf("E possivel formar um triangulo retangulo.");
        } else if (a * a > b * b + c * c) {
            printf("E possivel formar um trianguo obtusangulo.");
        } else {
            printf("E possivel formar um triangulo acutangulo.");
        }
    } else {
        printf("Nao e possivel formar um triangulo.");
    }

    return 0;
}