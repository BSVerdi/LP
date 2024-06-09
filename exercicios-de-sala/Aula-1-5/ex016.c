#include<stdio.h>
// numeros primos

int main()
{
    int num, ctg = 0;
    printf("Insira um valor: ");
    scanf("%d", &num);
    for (int c = 1; c <= num / 2; c++)
    {
        if (num % c == 0) ctg += 1;
    }
    if (ctg == 1) printf("O valor inserido e um numero primo.");
    else printf("O valor nao e um numero primo.");

    return 0;
}