#include<stdio.h>
#include<math.h>
//ex12, Soma 3, 05/04/2024, Aula 6

int main()
{
    int x, n, sinal = 1, fat = 1, exp = 1, j = 1;
    float soma = 0;
    printf("Insira o valor de x e n: ");
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        for(int c = 2; c <= j; c++) fat *= c;
        j += 2;
        printf("%d\n", fat);
        soma += (float)sinal * (float)pow(x , exp) / (float)fat;
        fat = 1;
        exp += 2;
        sinal *= -1;
    }
    printf("A soma resulta em %.2f", (float)soma);

    return 0;
}