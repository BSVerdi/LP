#include<stdio.h>
// Jogo da velha

int main() {
    char tabuleiro[3][3]; 
    int i, j, jogada = 0, fim = 1;
    for (i = 0; i < 3; i++) {
        tabuleiro[0][i] = ' ';
        tabuleiro[1][i] = ' ';
        tabuleiro[2][i] = ' ';
    }
    while (fim && jogada <= 9) {
        // impressão do tabuleiro
        for (i = 0; i < 3; i ++) {
            for (int j = 0; j < 3; j++) {
                printf(" %c ", tabuleiro[i][j]);
                if (j < 2) 
                    printf("|");
            }
            if (i < 2)
                printf("\n---+---+---\n");
        }
        // Jogada a ser feita
        if (jogada < 9) {
            while (1) {
                if (jogada % 2 == 0) {
                    printf("\nJogada do jogador(X)!\nOnde deseja jogar? ");
                    scanf("%d%d", &i, &j);
                    if (tabuleiro[i][j] == ' ') {
                        tabuleiro[i][j] = 'X';
                        break;
                    } else {
                        printf("Jogada invalida, tente novamente!");
                    }    
                } else {
                    printf("\nJogada do jogador(O)!\nOnde deseja jogar? ");
                    scanf("%d%d", &i, &j);
                    if (tabuleiro[i][j] == ' ') {
                        tabuleiro[i][j] = 'O';
                        break;
                    } else {
                        printf("Jogada invalida, tente novamente!");
                    }
                }
            }
            if (jogada > 3 && jogada < 9) {    
                // checagem  de vitoria na horizontal
                for (i = 0; i < 3; i ++) {
                    if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
                        if (tabuleiro[i][0] == 'X') {
                            printf("\nO jogador X ganhou!\n");
                            fim = 0;
                            break;
                        } else if (tabuleiro[i][0] == 'O') {
                            printf("\nO jogador O ganhou!\n");
                            fim = 0;
                            break;
                        }
                    }
                }
                // checagem na vertical
                for (i = 0; i < 3; i++) {
                    if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {
                        if (tabuleiro[0][i] == 'X') {
                            printf("\nO jogador X ganhou!\n");
                            fim = 0;
                            break;
                        } else if (tabuleiro[0][i] == 'O') {
                            printf("\nO jogador O ganhou!\n");
                            fim = 0;
                            break;
                        }
                    }
                }
                //checagem nas diagonais
                if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
                    if (tabuleiro[1][1] == 'X') {
                        printf("\nO jogador X ganhou!\n");
                        fim = 0;
                    } else if (tabuleiro[1][1] == 'O'){
                        printf("\nO jogador O ganhou!\n");
                        fim = 0;
                    }
                } else if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
                    if (tabuleiro[1][1] == 'X') {
                        printf("\nO jogador X ganhou!\n");
                        fim = 0;
                    } else if (tabuleiro[1][1] == 'O') {
                        printf("\nO jogador O ganhou!\n");
                        fim = 0;
                    }
                }
            }
        } else {
            printf("\nO jogo deu velha!\n");
        }
        jogada += 1;
    }
    
    return 0;
}