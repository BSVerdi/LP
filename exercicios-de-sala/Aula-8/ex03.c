#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int rgb[128][128][3], i, j, k;
    srand(time(0));
    // definindo os valores de r, g e b
    for (k = 0; k < 3; k){
        for (i = 0; i < 128; i++){
            for (j = 0; j < 128; j++){
                rgb[i][j][k] = rand() % 256;
            }
        }
    }
}