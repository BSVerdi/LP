#include<stdio.h>

int tfrase(char frase[]) {
    int contagem=0;
    for (int i=0; frase[i] != '\0'; i++) 
        contagem++;\

    return contagem;
}


int main() {
    char frase[250];
    int tamanho;

    printf("Insira a frase: ");
    gets(frase);

    tamanho = tfrase(frase);

    printf("A frase possui %d digitos", tamanho);

    return 0;
}
