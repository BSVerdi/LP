#include<stdio.h>
//soma dos algarismos de um numero natural, 05/04/2024, Aula 6

int main()
{
    int num, soma = 0;
    printf("Insira um valor: ");
    scanf("%d", &num);
    while(num > 0)
    {
        soma += num % 10;
        num /= 10;
    }
    printf("A soma dos algarismos desse valor e %d", soma);

    return 0;
}