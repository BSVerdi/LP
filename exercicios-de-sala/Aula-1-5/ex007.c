#include<stdio.h>
//multiplicação por soma

int main()
{
    int num1 = 0, num2 = 0, res = 0, c;
    printf("Digite os dois numeros que deseja multiplicar: ");
    scanf("%d %d", &num1, &num2);
    for(c = 1; c <= num1; c++)
    {
        res = res + num2;
    }
    printf("O produto desses numeros e %d", res);

    return 0;
}