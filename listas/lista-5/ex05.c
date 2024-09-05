#include<stdio.h>

int soma(int num) {
    if (num==1) return num;
    else {
        return (num + soma(num-1));
    }
}


int main() {
    int num;
    
    printf("Insira um valor: ");
    scanf("%d", &num);
    printf("Soma: %d", soma(num));

    return 0;
}