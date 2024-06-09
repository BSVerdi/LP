#include<stdio.h>
// calculo fatorial

int main()
{
    int num, c;
    printf("Digite Um valor: ");
    scanf("%d", &num);
    c = num;
    while (c > 1)
    {
        c = c - 1;
        num = num * c;
    }
    printf("%d", num);

    return 0;
}