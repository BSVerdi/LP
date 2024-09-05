#include<stdio.h>

void imprimir(int num) {
    if (num==0) return num;
    else {
        printf("%d ", num);
        imprimir(num-1);
    }
}


int main() {
    imprimir(10);

    return 0;
}