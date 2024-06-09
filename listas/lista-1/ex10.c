#include<stdio.h>
// tabuada de um numero n

int main() {
    int n;
    printf("Insira um valor: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%2d X %02d = %02d\n", n, i, n * i);
    }
    
    return 0;
}