#include<stdio.h>

void concatenar(char frase_1[], char frase_2[]) {
    int tamanho_frase_1=0, tamanho_frase_2=0, i;

    for (i=0; frase_1[i] != '\0'; i++)
        tamanho_frase_1++;
    for (i=0; frase_2[i] != '\0'; i++)
        tamanho_frase_2++;
    
    for (i=0; i<(tamanho_frase_1+tamanho_frase_2); i++) {
        if (i < tamanho_frase_1)
            printf("%c", frase_1[i]);
        else {
            printf("%c", frase_2[i-(tamanho_frase_2-1)]);
        }
    }
}


int main() {
    char frase_1[250], frase_2[250];
    
    printf("Insira a primeira frase: ");
    gets(frase_1);
    printf("Insira a segunda frase: ");
    gets(frase_2);

    printf("A frase concatenada e: ");
    concatenar(frase_1, frase_2);

    return 0;
}