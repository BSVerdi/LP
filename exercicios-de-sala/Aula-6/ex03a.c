#include<stdio.h>
#include<math.h>
//ex3, soma2, 05/04/2024, Aula 6

int main()
{
    int n, fat = 1, soma = 0;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
        soma += pow(i , fat);
    }
    printf("A soma e %d", soma);

    return 0;
}