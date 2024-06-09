#include<stdio.h>
// elementos de um vetor somando

int main()
{
    int v[10], soma[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("insira o %d valor: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if(i > 0)
            soma[i] = soma[i-1] + v[i];
        else
            soma[i] = v[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (i == 0)
            printf("[%d, ",soma[i]);
        else
        {
            if (i == 9)
                printf("%d]", soma[i]);
            else
                printf("%d, ", soma[i]);
        }
    }
    
    return 0;
}