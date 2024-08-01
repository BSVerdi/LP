#include<stdio.h>
// x = a^b r = c^x
int main() {
    int a, b, c, x = 1, r = 1;
    printf("Insira o valor de a, b e c: ");
    scanf("%d%d%d", &a, &b, &c);
    // calculando o valor de x
    for(int i=0; i<b; i++) {
        x *= a;
    }
    // calculado o valor de r
    for(int i=0; i<x; i++) {
        r *= c;
    }
    printf("%d", r);

    return 0;
}