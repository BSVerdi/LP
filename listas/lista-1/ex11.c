#include<stdio.h>
// contagem regressiva de 10 a 1

int main() {
    int ctg = 10;
    while (ctg != 0) {
        printf("%d => ", ctg);
        ctg -= 1;
    }
    printf("Fim");

    return 0;
}