#include<stdio.h>

#define MAIUSCULAS 65
#define MINUSCULAS 97

int main() {
    char frase[200], frase_maiuscula[200];
    int tamanho_lido, contagem_trocas=0;
    scanf("%[^\n]", &frase);
    tamanho_lido = strlen(frase);
    for(int i=0; i < tamanho_lido; i++) {
        for(int j=0; j<26; j++) {
            if (frase[i] == MINUSCULAS + j) {
                frase_maiuscula[i] = MAIUSCULAS + j;
                contagem_trocas++;
                break; 
            } else frase_maiuscula[i] = frase[i];
        }
    }
    printf("%s\n", frase_maiuscula);
    printf("%d\n", tamanho_lido);
    printf("%d\n", contagem_trocas);

    return 0;
}