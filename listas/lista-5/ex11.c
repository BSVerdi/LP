#include<stdio.h>

int fatorial(int num) {
    if ((num==0) || (num==1)) return 1;
    else {
        return (num * fatorial(num-1)); 
    }
}


int main() {
    int num, i;
    
    printf("Insira um valor: ");
    scanf("%d", &num);
    
    for (i=0; i<=num; i++) printf("Fat(%d) = %d\n", i, fatorial(i));

    return 0;
}