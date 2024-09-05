#include<stdio.h>

int fib(int num) {
    if (num==0) return num;
    else if (num==1) return num;
    else return(fib(num-1) + fib(num-2));
}


int main() {
    int num;

    printf("Insira o valor: ");
    scanf("%d", &num);
    printf("fib(%d) = %d", num, fib(num));

    return 0;
}