#include<stdio.h>

void imprimir(int n) {
    if (n==0) return n;
    else {
        imprimir(n-1);
        printf("%d ", n);
    }
}


int main() {
    int num=10;

    imprimir(num); 

    return 0;
}