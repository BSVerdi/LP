#include<stdio.h>
// tabela grau celsius

int main()
{
   float ls, li, dc, i;
   printf("Digite o limite inferior e superior do intervalo: ");
   scanf("%f %f", &li, &ls);
   printf("Digite o decremento: ");
   scanf("%f", &dc);
   for(i = li; i <= ls; i++)
   {
    printf("%.2f F => ", ((i * dc) * 9/5) + 32);
   }
   printf("Fim");

   return 0;
}