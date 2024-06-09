#include<stdio.h>

int main() {
    float peso, altura, imc;
    printf("Insira sua altura(m) e seu peso(kg): ");
    scanf("%f%f", &altura, &peso);
    imc = peso / (altura * altura);
    printf("Seu IMC e %.2f", imc);

    return 0;
}