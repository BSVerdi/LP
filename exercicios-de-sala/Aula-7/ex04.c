#include<stdio.h>
// ordenador de numeros

int main()
{
    typedef int v[20];
    v vet;
    int aux, bolha, lsup, j;
    for (j = 0; j < 20; j++)
    {
        printf("Insira o %d valor: ", j + 1);
        scanf("%d", &vet[j]);
    }
    lsup = 20;
    while (lsup > 1)
    {
        bolha = 0;
        for (j = 0; j < lsup - 1; j++)
        {
            if(vet[j] > vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
                bolha = j;
            }
        }
        lsup = bolha;
    }
    for (j = 0; j < 20; j++)
    {
        if (j == 0) 
            printf("[%d, ", vet[j]);
        else
        {
            if (j == 19) 
                printf("%d]", vet[j]);
            else
                printf("%d, ", vet[j]);
        }
    }

    return 0;
}