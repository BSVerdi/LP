#include<stdio.h>

void removedor_especial(char frase[], char frase_removida[]) {
    int aux=0;
    for(int i=0; frase[i] != '\0'; i++) {
        if ((('A' <=frase[i]) && (frase[i] <= 'Z')) || (('a' <= frase[i]) && (frase[i] <= 'z')) || (frase[i] == ' ')) {   
            frase_removida[aux] = frase[i];
            aux++;
        }
    }
}


int main() {
    char frase[50], frase_removida[50];
    int size=0;

    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);
    
    for (int i=0; frase[i] != '\0'; i++) size++;

    removedor_especial(frase, frase_removida);

    puts(frase_removida);

    return 0;
}