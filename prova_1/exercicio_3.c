#include<stdio.h>
// h(x) = 1, se x < 3; h(x) = x * 2, se 3 <= x < 6; h(x) = h(x - 1) + h(x - 2), se 6 < x.
int main() {
    int x, a, b, res;
    printf("Insira o valor de X: ");
    scanf("%d", &x);
    if (x < 3) {
        printf("h(%d) = 1", x);
    } else {
        if (3 <= x && x < 6) {
            printf("h(%d) = %d", x, x * 2);
        } else {
            a = 8;
            b = 10;
            for(int i=0; i<x - 5; i++) {
                res = a + b;
                a = b;
                b = res;
            }
        }
        printf("h(%d) = %d", x, res);
    }

    return 0;
}
