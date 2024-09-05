#include<stdio.h>

void palindromo(char frase[]) {
    int tamanho_frase=0, tamanho_frase_sem_espaco=0, i, aux=0;
    char frase_sem_espaco[250];

    for (i=0; frase[i] != '\0'; i++)
        tamanho_frase++;

    for (i=0; i<tamanho_frase; i++) {
        if (frase[i] == '\n')
            i++;
        frase_sem_espaco[aux] = frase[i];
        tamanho_frase_sem_espaco++;
        aux++;
    }
    
    aux=0;

    for (int i=0; i<tamanho_frase_sem_espaco; i++) {
        if (frase_sem_espaco[i] == frase_sem_espaco[(tamanho_frase_sem_espaco-1) - i])
            aux++;
    }
    if (aux==tamanho_frase_sem_espaco) printf("A frase e um palindromo");
    else printf("A frase nao e um palindromo");
}


int main() {
    char frase[250];

    printf("Insira a frase: ");
    gets(frase);

    palindromo(frase);

    return 0;
}