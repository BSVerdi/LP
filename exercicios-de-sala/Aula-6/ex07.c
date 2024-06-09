#include<stdio.h>
//ex7, Numeros cujo divisao por C reste 5, no intervalo [A ; B], 05/04/2024, Aula 6

int main()
{
    int a, b, c;
    printf("Insira o intervalo [A ; B] e o divisor C maior que 5: ");
    scanf("%d %d %d", &a, &b, &c);
    while (c <= 5)
    {            
        printf("O divisor C deve ser maior que 5.");
        printf("Insira novamente");
        scanf("%d", &c);
    }
    printf("Os valores cujo o resto da divisao por C e igual a 5 sao:\n");
    for (int i = a; i <= b; i++)
    {
        if (i % c == 5) printf("%d => ", i);
    }
    printf("Fim");

    return 0;
}