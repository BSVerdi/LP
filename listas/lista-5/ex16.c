#include<stdio.h>


void espacos(char frase[], int tamanho_frase) {
    if (tamanho_frase > 1) {
        frase[(tamanho_frase - 1) * 2] = frase[tamanho_frase-1];
        frase[((tamanho_frase - 1) * 2) - 1] = ' ';
        espacos(frase ,tamanho_frase-1);
    }
}


int main() {
    char frase[20];
    int tamanho_frase=0;

    scanf("%[^\n]", &frase);

    for (int i=0; frase[i] != '\0'; i++) tamanho_frase++;

    espacos(frase, tamanho_frase);
    puts(frase);

    return 0;
}