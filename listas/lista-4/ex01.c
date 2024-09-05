#include<stdio.h>

void inverter(char frase[], int tamanho_frase) {
    for (int i=0; i<tamanho_frase; i++) {
        printf("%c", frase[tamanho_frase-1-i]);
    }
}


int main() {
    char frase[250];
    int tamanho_frase=0;

    printf("Insira a frase: ");
    gets(frase);

    for (int i=0; frase[i] != '\0'; i++)
        tamanho_frase++;

    inverter(frase, tamanho_frase);

    return 0;
}