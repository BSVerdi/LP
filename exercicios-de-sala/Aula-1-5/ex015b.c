#include<stdio.h>
// potencia por soma

int main()
{
    int num, exp, pot = 0, mul = 1;
    printf("Insira a base e o expoente: ");
    scanf("%d %d", &num, &exp);
    for (int i = 1; i <= exp; i++)
    {
        pot = 0;
        for (int c = 1; c <= num; c++) 
            pot += mul;  
        mul = pot;
    }
    printf("%d elevado a %d e %d.",num, exp, pot);

    return 0;
}