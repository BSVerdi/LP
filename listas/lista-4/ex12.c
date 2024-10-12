#include<stdio.h>

void reversao(char frase[], char palavras_invertidas[]) {
    int aux=0;
    for (int i=0; frase[i] != '\0'; i++) {
        if ((frase[i] == ' ') || frase[i] == '\0') {
            palavras_invertidas[i] = ' ';
            for (int j=aux; j<((frase[j] != ' ') || (frase[j] != '\0')); j++) {
                palavras_invertidas[j] = frase[(i-1)-j];
            }
            aux = i+1;
        }
    }
}


int main() {
    char frase[20], palavras_invertidas[20];

    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);

    reversao(frase, palavras_invertidas);

    puts(palavras_invertidas);

    return 0;
}