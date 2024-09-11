#include<stdio.h>

void maiusculas(char frase[]) {
    for (int i=0; frase[i] != '\0'; i++)
        if (('a'<= frase[i]) && (frase[i] <= 'z')) 
            frase[i] = frase[i] - ('a' - 'A');
}


int main() {
    char frase[20];

    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);

    maiusculas(frase);

    puts(frase);

    return 0;
}