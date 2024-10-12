#include<stdio.h>

void removedor_de_espacos(char frase[]) {
    for(int i=0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            for (int j=i; frase[j] != '\0'; j++) 
                frase[j] = frase[j+1];
        }
    }
}


int main() {
    char frase[50];

    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);

    removedor_de_espacos(frase);

    puts(frase);

    return 0;
}