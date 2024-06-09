#include<stdio.h>
// soma dos numeros de 1 a 100

int main()
{
    int num, soma;
    soma = 0;
    for(num = 1; num <= 100; num++)
    {
        printf("%d ", num);
        soma = soma + num;
    }
    printf("\n A soma dos numeros de 1 a 100 e %d", soma);
    return 0;
}
