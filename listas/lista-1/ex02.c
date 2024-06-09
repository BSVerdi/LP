#include<stdio.h>
// verificação de aprovação

int main() {
    float media_aluno, media_instituicao;
    printf("Insira a media da instituicao: ");
    scanf("%f", &media_instituicao);
    printf("Insira a media do aluno: ");
    scanf("%f", &media_aluno);
    if (media_aluno >= media_instituicao) {
        printf("O aluno foi aprovado!");
    }   else {
        printf("O aluno foi reporvado!");
    }

    return 0;
}