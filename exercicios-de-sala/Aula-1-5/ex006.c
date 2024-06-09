#include<stdio.h>
// media, maior e menor dos valores digitados pelo usuario

int main()
{
    int num, maior, menor, soma = 0, qtd = 0;
    do
    {
        printf("Digite um valor: ");
        scanf("%d", &num);
        if (num >= 0)
        {
            if (qtd == 0)
            {
                maior = num;
                menor = num;
            }
            else
            {
                if (num > maior) maior = num;
                if (num < menor) menor = num;
            }
            soma = soma + num;
            qtd = qtd + 1;
        }
    } while (num != -1);
    if (qtd >= 1)
    {
        printf("\nO maior numero e %d" ,maior);
        printf("\nO menor numero e %d" ,menor);
        printf("A media dos numeros e %d", soma / qtd);
    }
    
    return 0;
}
