#include<stdio.h>
//ex10, Soma e produto dos numeros pares entre 1 e n, 05/04/2024, Aula 6

int main()
{
    long int n, soma = 0, produto = 1;
    printf("Insira o valor de n: ");
    scanf("%ld", &n);
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
            produto = produto * i;
        }
    }
    printf("A soma dos numeros pares nesse intervalo e %ld\n", soma);
    printf("O produto dos numeros pares nesse intervalo e %ld", produto);

    return 0;
}