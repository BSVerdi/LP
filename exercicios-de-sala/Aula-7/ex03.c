#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//ex 2, verificação de chave, 10/04/2024, aula 7

int main()
{
    int a[128], i, k, encontrou = 0;
    srand(time(0));
    for(i = 0; i < 128; i++)
        a[i] = rand() % 1000;
    printf("Digite a chave desejada: ");
    scanf("%d", &k);
    for(i = 0; i < 128; i++)
    {
        if(a[i] == k)
        {
            printf("Chave desejada encontrada na posicao %d.\n", i);
            encontrou = 1;
            break;
        }
    }
    if (!encontrou) printf("Chave nao encontrada.");

    return 0;
}   