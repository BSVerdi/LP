#include<stdio.h>
//ex6, Numeros primos a sua media em intervalo n, 05/04/2024, Aula 6

int main()
{
    int num, ctg = 0, qntd = 0, soma = 0;
    printf("Insira o valor do intervalo: ");
    scanf("%d", &num);
    printf("Os numeros primos dentro desse intervalo\n");
    for (int i = 1; i <= num; i++)
    {
        for (int c = 1; c <= i / 2; c++)
        {
            if (i % c == 0) ctg += 1;
        }
        if (ctg == 1)
        {
            printf("%d => ", i);
            soma += i;
            qntd += 1;
        }
        ctg = 0;
    }
    printf("Fim!\n");
    printf("A media dos numeros primos nesse intervalo e %.2f", (float)soma/(float)qntd);
    
    return 0;
}