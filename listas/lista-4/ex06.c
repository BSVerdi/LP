#include<stdio.h>

void substituir(char frase[], char substituido, char substituto) {
    for (int i=0; frase[i] != '\0'; i++)
        if (frase[i] == substituido) frase[i] = substituto;
}


int main() {
    char frase[250], substituido, substituto, bin;
    
    printf("Insira a frase: ");
    scanf("%[^\n]", &frase);
    printf("Insira o caractere que deseja substituir: ");
    bin = getchar();
    scanf("%c", &substituido);
    printf("Por qual deseja substituir?: ");
    bin = getchar();
    scanf("%c", &substituto);

    substituir(frase, substituido, substituto);

    puts(frase);

    return 0;
}