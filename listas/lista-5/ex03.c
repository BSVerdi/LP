#include<stdio.h>

void imprimir(int num) {
    if (num==0) return num;
    else {
        imprimir(num-1);
        printf("%d ", num);
    }
}


int main() {
    int num;

    printf("Insira um valor: ");
    scanf("%d", &num);

    imprimir(num);

    return 0;
}