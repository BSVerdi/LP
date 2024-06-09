#include<stdio.h>
// o x termo da sequencia de fibonacci

int main()
{
    int num, fib, i, a1 = 1, a2 = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 2)
    {
        printf("O fibonacci de %d e %d", num, num);
    }
    else
    {
        for(i = 2; i <= num; i++)
        {
            fib = a1 + a2;
            a2 = a1;
            a1 = fib;
        }

    }
    printf("O fibonacci de %d e %d ",num, fib);
    return 0;
}
