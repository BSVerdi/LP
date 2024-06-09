#include<stdio.h>
// fibonacci

int main()
{
    int num, a1 = 1, a2 = 0, fib;
    printf("Insira um valor: ");
    scanf("%d", &num);
    for (int c = 0; c <= num; c++)
    {
        if (c < 2) printf("%d => ", c);
        else
        {
            fib = a1 + a2;
            a2 = a1;
            a1 = fib;
            printf("%d => ", fib);
        }
    }
    printf("Fim");

    return 0;
}