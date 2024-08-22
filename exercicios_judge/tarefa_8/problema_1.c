#include<stdio.h>

int main() {
    char palavras[1000]; 
    int tamanho, M=0, m=0;
    scanf("%[^\n]", &palavras);
    tamanho = strlen(palavras);
    for (int i=0; i<tamanho; i++) {
        if (palavras[i] >= 'A' && palavras[i] <= 'Z')
            M += 1;
        else if (palavras[i] >= 'a' && palavras[i] <= 'z') 
            m += 1;
    }
    printf("m: %d\n", m);
    printf("M: %d", M);

    return 0;
}