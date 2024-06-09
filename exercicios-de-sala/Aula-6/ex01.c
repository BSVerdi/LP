#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//ex1, Dado, 05/04/2024, Aula 6

int main()
{
    int dado, n, ctg1 = 0, ctg2 = 0, ctg3 = 0, ctg4 = 0, ctg5 = 0, ctg6 = 0;
    printf("Insira a quantidade de vezes que deseja jogar o dado: ");
    scanf("%d", &n);
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
            dado = 1 + rand() % 6;
        switch (dado)
        {
        case 1: ctg1++; break;
        case 2: ctg2++; break;
        case 3: ctg3++; break;
        case 4: ctg4++; break;
        case 5: ctg5++; break;
        case 6: ctg6++; break;
        default: break;
        }
    }
    printf("\n1: %d vezes | %.2f%% |",ctg1, (float)ctg1 * 100 / (float)n );
    printf("\n2: %d vezes | %.2f%% |",ctg2, (float)ctg2 * 100 / (float)n );
    printf("\n3: %d vezes | %.2f%% |",ctg3, (float)ctg3 * 100 / (float)n );
    printf("\n4: %d vezes | %.2f%% |",ctg4, (float)ctg4 * 100 / (float)n );
    printf("\n5: %d vezes | %.2f%% |",ctg5, (float)ctg5 * 100 / (float)n );
    printf("\n6: %d vezes | %.2f%% |",ctg6, (float)ctg6 * 100 / (float)n );
    
    return 0;
}
