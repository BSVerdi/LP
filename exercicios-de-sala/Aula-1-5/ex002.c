#include<stdio.h>
// numeros multiplos de 5 e 7

int main()
{
    int num, a;
    printf("Digite um valor: ");
    scanf("%d", &num);
    for(a = 1; a <= num; a++) 
    {
        if(a % 5 == 0 && a % 7 == 0)
        {
            printf("%d ", a);
        }
    }
    return 0;
}