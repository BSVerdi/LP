#include<stdio.h>
// numeros multiplos de 5 em um intervalo

int main()
{
    int intervalo, i;
    printf("Digite um valor: ");
    scanf("%d", &intervalo);
    for(i = 1; i <= intervalo; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d => ", i);
        }
    }
    printf("Fim");
    
    return 0;
}