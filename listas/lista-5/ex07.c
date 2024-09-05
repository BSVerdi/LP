#include<stdio.h>

void impares(int num) {
    if (num==0) return num;
    else {
        impares(num-1);
        if(num % 2 != 0) printf("%d ", num);
    }
}


int main() {
    int num;

    printf("Insira um valor:");
    scanf("%d", &num);
    impares(num);

    return 0;
}