#include<stdio.h>

int multiplicar(int a, int b) {
    if (a==1) return b;
    else return(b + multiplicar(a-1, b));
}


int main() {
    int a, b;

    printf("Insira o valor de A e B: ");
    scanf("%d%d", &a, &b);
    printf("%d x %d = %d", a, b, multiplicar(a, b));

    return 0;
}