#include<stdio.h>

int fib(int num) {
    if (num==0) return num;
    else if (num==1) return num;
    else return(fib(num-1) + fib(num-2));
}


int main() {
    int num, i;

    printf("Insira o valor: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++) printf("fib(%d) = %d\n", num, fib(i));

    return 0;
}