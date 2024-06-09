#include<stdio.h>
//ex2, soma1 com expoente por soma, 05/04/2024, Aula 6

int main()
{
    int n, soma = 0, pot = 0, mul = 1;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int c = 1; c <= i; c++)
        {
            pot = 0;
            for (int d = 1; d <= i; d++)
                pot += mul;
            mul = pot;
        }
        soma += pot;
        mul = 1;
    }
    printf("A soma vale %d", soma);

    return 0;
}