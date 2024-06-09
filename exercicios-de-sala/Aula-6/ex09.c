#include<stdio.h>
//ex9, Verificação de existência de triângulo, 05/04/2024, Aula 6

int main()
{
    int a, b, c;
    printf("Insira o valor dos lados do triangulo em ordem decrescente: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a * a == b * b + c * c) printf("E possivel formar um triangulo retangulo.");
        else
        {
            if (a * a > b * b + c * c) printf("E possivel formar um triangulo obtusangulo.");
            else printf("E possivel formar um triangulo acutangulo.");
        }
    }
    else printf("Nao e possivel formar um triangulo.");

    return 0;
}