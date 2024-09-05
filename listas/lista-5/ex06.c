#include<stdio.h>

void imprimir(int num) {
    if (num == 0) return num;
    else {
        imprimir(num-1);
        if (num % 2 != 0) printf("%d ", num);
    }
}


int main() {
    imprimir(20);

    return 0;
}