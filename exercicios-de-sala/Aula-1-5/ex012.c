#include<stdio.h>
// fatorial

int main()
{
    int num, fat = 1;
        printf("Insira um valor: ");
        scanf("%d", &num);
    do
    {
        printf("O valor inserido nao e compativel.\nTente novamente!\n");
        printf("Insira um valor: ");
        scanf("%d", &num);
    }while(num < 0);
    for(int c = 2; c  <= num; c++)
    {
        fat = fat * c;
    }
    printf("O fatorial de %d e %d", num, fat);

    return 0;
}