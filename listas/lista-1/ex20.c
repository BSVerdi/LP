#include<stdio.h>
// conversor de minutos para horas e minutos

int main() {
    int minutos, horas;
    printf("Insira a quantidade de minutos: ");
    scanf("%d", &minutos);
    horas = minutos / 60;
    minutos %= 60;
    printf("Ao total sao %d horas e %d minutos.", horas, minutos);

    return 0;
}