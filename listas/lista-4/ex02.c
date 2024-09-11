#include<stdio.h>

int contador(char frase[]) {
    int contagem=0;
    for (int i=0; frase[i] != '\0'; i++) contagem++;
    return contagem;
}

int main() {
    int tamanho;
    char frase[250];
    
    printf("Insira a frase: ");
    gets(frase);

    tamanho = contador(frase);

    printf("A frase possui %d caracteres (incluindo os espacos).", tamanho);

    return 0;
}