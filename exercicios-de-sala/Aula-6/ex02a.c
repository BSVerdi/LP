#include<stdio.h>
#include<math.h>
//ex2, soma1, 05/04/2024, Aula 6

int main()
{
    int n, soma = 0;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    for(int c = 1; c <= n; c++) 
    {
        soma += pow(c , c);
    }
    printf("A soma e %d", soma);

    return 0;
}