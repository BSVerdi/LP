#include<stdio.h>
#include<math.h>
// calculo das raizes de uma equação quadratica

int main() {
    float x1, x2, a, b, c ,delta;
    printf("Insira os coeficientes A, B e C da equacao quadratica: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As equacao possui duas raizes, sendo elas %.0f %.0f", x1, x2);
    } else if (delta == 0) {
        x1 = -b / 2 * a;
        printf("A equacao possui duas raizes iguais, sendo elas %.0f", x1);
    } else {
        printf("Não exite raiz no conjunto dos reais para a equação dada");
    }

    return 0;
}