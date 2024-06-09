#include<stdio.h>
#include<math.h>
// um numero num elevado a um expoete exp

int main()
{
    int num, exp;
    printf("Insira a base e o expoente: ");
    scanf("%d %d", &num, &exp);
    printf("%d elevado a %d e %.0f",num, exp, pow(num, exp));

    return 0;
}
