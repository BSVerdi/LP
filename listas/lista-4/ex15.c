#include<stdio.h>

void findit(char frase[], char substring[]) {
    int size_1=0, size_2=0, i, j, valido=0, ctg=0;

    for (i=0; frase[i] != '\0'; i++) size_1++;
    for (i=0; substring[i] != '\0'; i++) size_2++;
    
    i = 0;

    while (i < size_1) {
        while (frase[i] != ' ' && frase[i] != '\0') {
            ctg++;
            i++;
        }
        if (ctg == size_2) {
            for (j=0; j<size_2; j++) {
                if (frase[(i-ctg) + j] == substring[j])
                    valido++;
            }
            ctg = 0;
        } else ctg = 0;
        if (valido == size_2) {
            printf("A substring esta presente na frase.");
            break;
        } else valido = 0;
        i++;
    }
}


int main() {
    char frase[50], substring[10];

    printf("Insira a frase: ");
    gets(frase);
    printf("Insira a substring: ");
    gets(substring);

    findit(frase, substring);

    return 0;
}