#include<stdio.h>

int soma(int num) {
    if (num==1) return num;
    else {
        return (num + soma(num-1));
    }
}


int main() {
    printf("Soma: %d", soma(15));

    return 0;
}