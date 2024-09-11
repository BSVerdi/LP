#include<stdio.h>

void palindromo(char frase[], int tamanho_frase) {
    int i=0, j = tamanho_frase-1, valido = 1;
    while (i<tamanho_frase) {
        if (frase[i] == ' ') i++;
        else if (frase[j] == ' ') j--;
        if (!(frase[i] == frase[j]) && valido == 1) {
            valido=0;
            break;
        }
        i++;
        j--;
    }
    if (valido) printf("A frase e um palindromo");
    else printf("A frase nao e um palindromo");
}


int main() {
    char frase[250];
    int tamanho_frase=0;

    printf("Insira a frase: ");
    gets(frase);

    for (int i=0; frase[i] != '\0'; i++) tamanho_frase++;

    palindromo(frase, tamanho_frase);

    return 0;
}