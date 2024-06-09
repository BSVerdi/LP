#include<stdio.h>
// soma1

int main()
{
    float h = 0, i, n; 
    printf("Digite um valor: ");
    scanf("%f", &n);
    for(i = 1; i <= n; i++)
    {
        h = h + 1 / i;
    }
    printf("%.2f", h);

    return 0;
}