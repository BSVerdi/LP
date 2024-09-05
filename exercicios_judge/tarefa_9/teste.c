#include<stdio.h>

int main() {
    char frase[250], troca[250];
    int trocas_validas=0, troca_valida=0;

    gets(frase);
    gets(troca);

    for (int i=0; i<strlen(frase); i++) {
        for (int j=0; j<strlen(troca);j++) {
            if (frase[i+j] == troca[j])
                troca_valida++;
        }
        if(troca_valida == strlen(troca)) trocas_validas++;
        troca_valida = 0;
    }
    printf("%d", trocas_validas);

    return 0;
}