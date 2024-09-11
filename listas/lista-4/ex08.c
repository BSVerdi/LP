#include<stdio.h>

void extrator(char frase[], int pos_inicial, int tamanho_sub_frase) {
    char sub_frase[tamanho_sub_frase];
    int j=0;
    for (int i=pos_inicial; i<(pos_inicial + tamanho_sub_frase); i++) {
        sub_frase[j] = frase[i];
        j++;
    }sql
    puts(sub_frase);
}


int main() {
    char frase[100];
    int tamanho_sub_frase, pos_inicial;

    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);
    printf("Insira a posicao inicial da sub frase: ");
    scanf("%d", &pos_inicial);
    printf("Insira o tamanho da sub frase: ");
    scanf("%d", &tamanho_sub_frase);

    extrator(frase, pos_inicial, tamanho_sub_frase);

    return 0;
}