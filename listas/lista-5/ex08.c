#include<stdio.h>

void pares(int num) {
    if (num==0) return num;
    else {
        pares(num-1);
        if (num % 2 == 0) printf("%d ", num);
    }
}


int main() {
    pares(20);

    return 0;
}