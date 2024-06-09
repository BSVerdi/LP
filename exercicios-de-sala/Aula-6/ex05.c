#include<stdio.h>
//ex5, Numeros primos em um intervalo n, 05/04/2024, Aula 6

int main()
{
    int num, ctg = 0;
    printf("Insira o valor do intervalo: ");
    scanf("%d", &num);
    printf("Os numeros primos dentro desse intervalo sao:\n");
    for (int i = 1; i <= num; i++)
    {
        for (int c = 1; c <= i / 2; c++)
        {
            if (i % c == 0) ctg += 1;
        }
        if (ctg == 1) printf("%d => ", i);
        ctg = 0;
    }
    printf("Fim!");

    return 0;
}