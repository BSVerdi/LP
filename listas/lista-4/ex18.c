#include<stdio.h>

void capitalizar(char frase[]) {
    int i=0;
    while (frase[i] != '\0') {
        if (('a' <= frase[i]) && (frase[i] <= 'z')) {
            frase[i] -= ('a' - 'A');
        }
        while (frase[i] != ' ' && frase[i] != '\0')
            i++;
        i++;
    }
}


int main() {
    char frase[250];

    printf("Insira a frase: ");
    gets(frase);

    capitalizar(frase);

    puts(frase);

    return 0;
}