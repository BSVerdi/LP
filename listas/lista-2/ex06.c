#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// pesquisa de um elemento x em um vetor aleatorio

int main() {
    int v[10], verificador = 0, x, i;
    srand(time(0));
    printf("[ ");
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 10;
        printf("%d ", v[i]);
    }
    printf("]\n");
    printf("Qual elemento deseja pesquisar?: ");
    scanf("%d", &x);
    for (i = 0; i < 10; i++) {
        if (v[i] == x) {
            verificador = 1;
            break;
        }
    }
    if (verificador) {
        printf("O vetor acima contem o elemento pesquisado.");
    } else {
        printf("O vetor acima nao contem o elemento pesquisado.");
    }
    
    return 0;
}