#include<stdio.h>
//ex11, quadrado de um valor inteiro maior que n, 05/04/2024, Aula 6

int main()
{
    int n;
    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("Valor invalido.\nTente novamente!\nInsira um valor inteiro positivo: ");
        scanf("%d", &n);
    }
    for (int i = 1; i <= n; i++)
    {
        if (i * i > n)
        {
            printf("O menor numero inteiro cujo o quadrado e maior que %d e %d", n, i);
            break;
        }
    }
    
    return 0;
}