#include<stdio.h>
// conversão de celsius para fahrenheit

int main() {
    float tf, tc;
    printf("Insira uma temperatura em graus celsius: ");
    scanf("%f", &tc);
    tf = (tc * 9/5) + 32;
    printf("A temperatura inserida em fahrenheit vale: %.1f F", tf);

    return 0;
}