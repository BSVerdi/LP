#include<stdio.h>

void inserir(char frase[], char sub_frase[], int pos) {
    int i, p=0, size=0;
    char aux[250];

    for (i=0; i<250; i++) aux[i] = 0;

    for (i=pos; frase[i] != '\0'; i++) {
        aux[p] = frase[i];
        p++;
    }

    size = pos;

    for (i=0; sub_frase[i] != '\0'; i++) {
        frase[pos + i] = sub_frase[i];
        size++;
    }

    for (i=0; aux[i] != '\0'; i++)
        frase[size + i] = aux[i];

}


int main() {
    char frase[250], sub_frase[10];
    int pos;

    printf("Insira a frase: ");
    gets(frase);
    printf("Insira a sub_frase: ");
    gets(sub_frase);
    printf("Insira a posicao: ");
    scanf("%d", &pos);
    
    inserir(frase, sub_frase, pos);

    puts(frase);

    return 0;
}