#include<stdio.h>

void comparador(char frase_1[], char frase_2[]) {
    int tamanho_frase_1=0, tamanho_frase_2=0, i, aux=0;
    for (i=0; frase_1[i] != '\0'; i++)
        tamanho_frase_1++;
    for (i=0; frase_2[i] != '\0'; i++)
        tamanho_frase_2++;
    if (tamanho_frase_1 == tamanho_frase_2) {
        for (i=0; i<tamanho_frase_1; i++) {
            if(frase_1[i] == frase_2[i])
                aux++;
        }
        if (aux == tamanho_frase_1) printf("As frase sao iguais");
        else printf("As frases nao sao iguais");
    } else printf("As frases nao sao iguais.");
}


int main() {
    char frase_1[250], frase_2[250];
    
    printf("Insira a primeira frase: ");
    gets(frase_1);
    printf("Insira a segunda frase: ");
    gets(frase_2);

    comparador(frase_1, frase_2);

    return 0;
}