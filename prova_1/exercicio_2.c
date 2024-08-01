#include<stdio.h>
// quantas vezes um digito aparece em um numero
int main() {
    int num, contagem = 0, qtd = 0, digitos[100];
    printf("Digite um numero: ");
    scanf("%d", &num);
    while( num > 0) {
        digitos[contagem] = num % 10;
        num /= 10;
        contagem += 1;
    }
    // imprimindo
    for(int i=0; i<10; i++) {
        for(int j=0; j<contagem; j++) {
            if (i == digitos[j]) {
                qtd += 1;
            }
        }
        if (qtd > 0) {
            printf("O numero %d apareceu %d vezes\n", i, qtd);
        }
        qtd = 0;
    }

    return 0;
}