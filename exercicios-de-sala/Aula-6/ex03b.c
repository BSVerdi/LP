#include<stdio.h>
//ex3, soma2, 05/04/2024, Aula 6

int main()
{
    int n, fat = 1, soma = 0, pot = 0, mul = 1;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
        for (int c = 1; c <= fat; c++)
        {
            pot = 0;
            for(int d = 1; d <= i; d++)
                pot += mul;
            mul = pot;
        }
        soma += pot;
        mul = 1;
    }
    printf("A soma e %d", soma);

    return 0;
}