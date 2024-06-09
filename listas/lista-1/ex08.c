#include<stdio.h>
// media de 5 notas inseridas

int main() {
    float media = 0, nota;
    for (int i = 1; i <= 5; i++) {
        printf("Insira a nota %d: ", i);
        scanf("%f", &nota);
        media += nota;
    }
    printf("A media das notas e %.2f", media / 5);
    
    return 0;
}