#include<stdio.h>

int main() {
    char frase[250], frase_trocada[250],trecho_a_trocar[250], trecho_substituto[250];
    int troca_valida=0, i, j, pos=0, trocas=0, tamanho=0, tamanho_substituto, tamanho_troca;

    gets(frase);
    gets(trecho_a_trocar);
    gets(trecho_substituto);

    
    tamanho_troca = strlen(trecho_a_trocar);
    tamanho_substituto = strlen(trecho_substituto);

    for(i=0; frase[i] != '\0'; i++) {
        troca_valida = 0;
        for(j=0; j<tamanho_troca; j++) {
            if (frase[i+j] == trecho_a_trocar[j])
                troca_valida++;
        }
        if (troca_valida == tamanho_troca) {
            for(j=0; j<tamanho_substituto; j++) {
                frase_trocada[pos] = trecho_substituto[j];
                pos++;
                if (tamanho_substituto < tamanho_troca) i+= tamanho_troca - 1;
            }
            trocas++;
        } else {
            frase_trocada[pos] = frase[i];
            pos++;
        }
    }

    tamanho = strlen(frase) + trocas * (- tamanho_troca + tamanho_substituto);

    for (i=0; i<tamanho; i++)
        printf("%c", frase_trocada[i]);
    printf("\n%d", strlen(frase));
    printf("\n%d", tamanho);
    printf("\n%d", trocas);

    return 0;
}