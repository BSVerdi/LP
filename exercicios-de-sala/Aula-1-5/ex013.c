#include<stdio.h>
// media de n numeros

int main()
{
    float num = 0, soma = 0, ctg = 0;
    while(1)
    {
        printf("Insira um valor: ");
        scanf("%f", &num);
        if (num != -1)
        {
            soma = soma + num;
            ctg++;
        }
        else break;
        printf("Encerrar programa (-1)\n");
    }
    printf("A media dos valores inseridos e %.2f", soma / ctg);

    return 0;
}