#include<stdio.h>
//ex4, verificação numero primo, 05/04/2024, Aula 6

int main()
{
    int num, ctg = 0;
    printf("Insira um valor: ");
    scanf("%d", &num);
    for (int i = 1; i <= num/2; i++)
    {
        if (num % i == 0) ctg += 1;
    }
    if (ctg == 1) printf("O valor %d inserido e um numero primo.", num);
    else printf("O valor %d inserido nao e um numero primo.", num);

    return 0;
}