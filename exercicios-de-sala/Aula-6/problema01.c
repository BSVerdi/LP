#include<stdio.h>
//Numero perfeito, 05/04/2024, Aula 6

int main()
{
    int num, soma = 0;
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &num);
    for (int i = 1; i <= num/2; i++)
    {
        if (num % i == 0) soma += i;
    }
    if (soma == num) printf("%d e um numero perfeito.", num);
    else printf("%d nao e um numero perfeito", num);

    return 0;
}
