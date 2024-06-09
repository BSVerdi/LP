#include<stdio.h>
//ex8, Verificação de existencia de triangulo, 05/04/2024, Aula 6

int main()
{
    int a, b, c;
    printf("Insira o valor dos lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        if(a == b && b == c) printf("E possivel formar um triangulo equilatero.");
        else
        {
            if(a != b && b != c && c != a) printf("E possivel formar um triangulo escaleno.");
            else printf("E possivel formar um triangulo isosceles.");
        }
    }
    else printf("Nao e possivel formar um triangulo");

    return 0;
}