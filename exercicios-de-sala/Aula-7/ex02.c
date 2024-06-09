#include<stdio.h>
//ex 1, vetores, 10/04/2024, aula 7

#define MAX 10

int main()
{
    int i, r[MAX], s[MAX], y[MAX], x[20], soma = 0;
    for (i = 0; i < MAX; i++)
    {
        printf("Insira o %d valor de R: ", i + 1);
        scanf("%d", &r[i]);
    }
    for (i = 0; i < MAX; i++)
    {
        printf("Insira o %d valor de S: ", i + 1);
        scanf("%d", &s[i]);
    }
    for (i = 0; i < MAX; i++) soma += r[i] + s[i];
    for (i = 0; i < MAX; i++)
    {
        x[i] = r[i];
        x[i + 10] = s[i];
    }
    for (i = 0; i < MAX; i++) y[i] = s[i] * r[i];
    printf("A soma total dos valores de R e S vale %d\n", soma);
    printf("X = [");
    for(i = 0; i < 20; i++)
        printf("%d, ", x[i]);
    printf("Fim]\n");
    printf("Y = [");
    for(i = 0; i < MAX; i++) printf("%d, ", y[i]);
    printf("Fim]\n");

    return 0;
}