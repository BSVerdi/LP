#include<stdio.h>

int main() {
    float montante, capital_inicial, taxa_anual, tempo;
    printf("Insira o capital inicial, taxa de juros anual e o tempo em anos: ");
    scanf("%f%f%f", &capital_inicial, &taxa_anual, &tempo);
    montante = capital_inicial + (capital_inicial * taxa_anual / 100 * tempo);
    printf("O montante final sera de %.2f reais", montante);

    return 0;
}