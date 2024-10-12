#include<stdio.h>

void vogais_e_consoantes(char frase[], int *vogais, int *consoantes) {
    int i, j, aux = 0;
    for (i=0; frase[i] != '\0'; i++) {
        char _vogais[5] = {'a', 'e', 'i', 'o', 'u'};
        if ((('A' <=frase[i]) && (frase[i] <= 'Z')) || (('a' <= frase[i]) && (frase[i] <= 'z')))
            for (j=0; j<5; j++) {
                if (frase[i] == _vogais[j]) 
                    *vogais+= 1; 
                else 
                    aux++;
            }
        if (aux == 5) *consoantes += 1;
        aux = 0;
    }
}


int main() {
    int vogais=0, consoantes=0;
    char frase[50];

    gets(frase);

    vogais_e_consoantes(frase, &vogais, &consoantes);

    printf("A frase possui %d vogais\n", vogais);
    printf("A frase possui %d consoantes", consoantes);

    return 0;
}