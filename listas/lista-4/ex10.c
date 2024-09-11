#include<stdio.h>

void minusculas(char frase[]) {
    for (int i=0; frase[i] != '\0'; i++)
        if (('A'<= frase[i]) && (frase[i] <= 'Z')) 
            frase[i] = frase[i] + ('a' - 'A');
}


int main() {
    char frase[20];

    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);

    minusculas(frase);

    puts(frase);

    return 0;
}