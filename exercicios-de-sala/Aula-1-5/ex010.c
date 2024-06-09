#include<stdio.h>
// soma2

int main()
{
    float h = 0, i, n, fat; 
    printf("Digite um valor: ");
    scanf("%f", &n);
    for(i = 0; i <= n; i++)
    {
        if(i <= 2)
        {
            if(i == 0)
            {
                fat = 1;
            }
            else
            {
                fat = i;
            }
            h = h + 1 / fat;
        }
        else
        {
            fat = fat * i;
            h = h + 1 / fat;
        }
    }
    printf("%.2f", h);

    return 0;
}