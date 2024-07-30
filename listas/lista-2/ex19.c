#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// vetor com elementos que nao contem em um vetor nem outro

int main() {
    int vetor_a[5], vetor_b[5], vetor_c[5], contagem_elementos = 0, contem=0, i;
    srand(time(0));
    // vetor_a
    printf("Vetor A: [ ");
    for(i=0; i<5; i++) {
        vetor_a[i] = rand() % 10;
        printf("%d ", vetor_a[i]);
    }
    printf("]\n");
    // vetor_b
    printf("Vetor B: [ ");
    for(i=0; i<5; i++) {
        vetor_b[i] = rand() % 10;
        printf("%d ", vetor_b[i]);
    }
    printf("]\n");
    // vetor_c
    for(i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(vetor_a[i] == vetor_b[j]) {
                contem = 1;
            }
        }
        if(contem == 0) {
            vetor_c[contagem_elementos] = vetor_a[i];
            contagem_elementos += 1;
        }
    }
    printf("Vetor C: [ ");
    for(i=0; i<contagem_elementos; i++) {
        printf("%d ", vetor_c[i]);
    }
    printf("]\n");

    return 0;
}