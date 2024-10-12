#include<stdio.h>

int conversor_inteiro(char frase[]) {
    int num=0, i;
    
    for (i=0; frase[i] != 0; i++) {
        num *= 10;
        num += (frase[i] - 48);
    }

    return num;
}


int main() {
    char frase[10];
    int num;

    printf("Insira o valor numerico na string: ");
    gets(frase);

    num = conversor_inteiro(frase);

    printf("A string convertida em um valor inteiro resulta em: %d", num);

    return 0;
}