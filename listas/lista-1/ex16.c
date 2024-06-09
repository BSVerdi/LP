#include<stdio.h>
// verificador de numero primo

int main() {
    int num, ctg = 0, i;
    printf("Insira um valor: ");
    scanf("%d", &num);
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            ctg += 1;
        }
    }
    if (ctg == 1) {
        printf("%d e um numero primo!", num);
    } else {
        printf("%d nao e um numero primo!", num);
    }

    return 0;
}