#include<stdio.h>
//Numeros perfeitos em um intervalo [A;B], 05/04/2024, Aula 6

int main()
{
    int a, b, soma = 0;
    do
    {
        printf("Insira um valor do inicio e fim do intervalo: ");
        scanf("%d %d", &a , &b);
    } while (a >= b);
    for(int i = a; i <= b; i++)
    {
        for (int c = 1; c <= i/2; c++)
        {
            if (i % c == 0) soma += c;
        }
        if (soma == i) printf("%d => ", i);
        soma = 0;
    }
    printf("Fim");

    return 0;
}