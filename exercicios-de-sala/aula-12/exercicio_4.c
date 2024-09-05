#include<stdio.h>

int potencia(int num, int expoente) {
    if (expoente == 0) return 1;
    else if (expoente == 1) return num;
    else {
        return (num * potencia(num, expoente-1));
    }
}


int main() {
    int num, expoente;

    printf("Insira o valor e o expoente: ");
    scanf("%d%d", &num, &expoente);

    printf("O valor resultante e %d", potencia(num, expoente));

    return 0;
}