#include<stdio.h>
#include<math.h>
// calculo da distancia entre dois pontos no plano cartesiano

int main() {
    int x1, y1, x2, y2, distancia;
    printf("Insira (x , y) do primeiro ponto: ");
    scanf("%d%d", &x1, &y1);
    printf("Insira (x , y) do segundo ponto: ");
    scanf("%d%d", &x2, &y2);
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("A distancia entre os dois pontos e de %d", distancia);

    return 0;
}