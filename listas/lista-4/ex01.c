#include<stdio.h>

void inverter(char frase[], char frase_invertida[],int tamanho_frase) {
    for (int i=0; i<tamanho_frase; i++)
        frase_invertida[tamanho_frase-1-i] = frase[i];
}


int main() {
    char frase[250], frase_invertida[250];
    int tamanho_frase=0;

    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);

    for (int i=0; frase[i] != '\0'; i++) tamanho_frase++;

    inverter(frase, frase_invertida, tamanho_frase);

    puts(frase_invertida);

    return 0;
}