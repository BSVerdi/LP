#include<stdio.h>

#define MAIUSCULA 65
#define MINUSCULA 97

int main() {
    char caracteres[1000];
    int minusculas[26], maiusculas[26], tamanho, i, outros=0, especial=0;
    scanf("%[^\n]", &caracteres);
    tamanho = strlen(caracteres);
    for (i=0; i<26; i++) {
        minusculas[i] = 0;
        maiusculas[i] = 0;
    }
    for (i=0; i<tamanho; i++) {
        for (int j = 0; j < 26; j++) {
            if (caracteres[i] == MINUSCULA + j) {
                minusculas[j]++;
                especial=0;
                break;
            } else if (caracteres[i] == MAIUSCULA + j) {
                maiusculas[j]++;
                especial=0;
                break;
            } else especial=1;
        }
        if (especial) outros++;
    }
    for(i=0; i<26; i++)
        printf("%c - %d\n", MINUSCULA + i, minusculas[i]);
    for(i=0; i<26; i++)
        printf("%c - %d\n", MAIUSCULA + i, maiusculas[i]);
    printf("? - %d", outros);
    
    return 0;
}