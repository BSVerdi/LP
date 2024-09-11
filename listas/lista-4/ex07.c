#include<stdio.h>

int contador_de_palavras(char frase[]) {
    int contador=1;
    for (int i=0; frase[i] != '\0'; i++)
        if (frase[i] == ' ') contador++;

    return contador;
}


int main() {
    char frase[250];
    int palavras;

    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);

    palavras = contador_de_palavras(frase);

    printf("Ha %d palavras nessa frase.", palavras);

    return 0;
}