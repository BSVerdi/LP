#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//ex 0, dado viciado, 10/04/2024, aula 7 

#define NFACES 6

int main()
{
    int i, n, dado, faces[NFACES];
    srand(time(0));
    for(i = 0; i < NFACES; i++) faces[i] = 0;
    printf("Digite o numero de lances: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        dado = rand() % NFACES;
        faces[dado]++;
    }
    for (i = 0; i < NFACES; i++) printf("Face(%d) => %d\n", i+1, faces[i]);
    
    return 0;
}