#include<stdio.h>

void removedor(char frase[]) {
    int i, j, size=0;
    for(i=0; frase[i] != '\0'; i++)
        size++;
    for(i=0; i<(size-1); i++) {
        if (frase[i] == frase[i+1]) {
            for(j=0; j<((size-2)-i); j++)
                frase[i+1+j] = frase[i+2+j];
            frase[size-1] = '\0';
        }
    }
}


int main() {
    char frase[50];

    printf("Insira a frase: ");
    gets(frase);

    removedor(frase);

    puts(frase);

    return 0;
}