#include<stdio.h>
// calculo do quadrado de um valor somente por soma

int main() {
    int num, pot = 0;
    printf("Insira um valor: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        pot += num;
    }
    printf("O valor ao quadrado e %d", pot);

    return 0;
}