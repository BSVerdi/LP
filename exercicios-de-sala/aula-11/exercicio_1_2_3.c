#include<stdio.h>

struct TAluno {
    char nome[100];
    int ra;
    float nota;
    float freq;
};
 ;
struct TAluno aluno[100];
int reg=0;

void inserir() {
    char bin;
    printf("Inserindo o registro %d\n", reg);
    printf("\tNome: ");
    bin = getchar();
    scanf("%[^\n]", &aluno[reg].nome);
    printf("\tRA: ");
    scanf("%d", &aluno[reg].ra);
    printf("\tNota: ");
    scanf("%f", &aluno[reg].nota);
    printf("\tFrequecia: ");
    scanf("%f", &aluno[reg].freq);
    reg++;
}


int menu() {
    int opcao;
    printf("Menu de cadastro de alunos\n");
    printf("\t[0] - Sair\n");
    printf("\t[1] - Incluir\n");
    printf("\t[2] - Consultar");
    printf("\n\tInsira a opcao: ");
    scanf("%d", &opcao);
    
    return opcao;
}


void consulta() {
    int ra, end=1;
    printf("Insira o RA do aluno desejado: ");
    scanf("%d", &ra);
    for (int i=0; i<reg; i++) {
        if (aluno[i].ra == ra && reg > 0) {
            printf("\n\tNome: %s\n", aluno[i].nome);
            printf("\tRA: %d\n", aluno[i].ra);
            printf("\tNota: %.1f\n", aluno[i].nota);
            printf("\tFrequencia: %.1f\n\n", aluno[i].freq);
            end=0;
            break;
        } else if (i == reg-1) printf("\tO aluno nao esta registrado.\n");
    }
}


int main() {
    int opcao;
    do {
        opcao = menu();
        switch (opcao) {
            case 1: inserir(); break;
            case 2: consulta(); break;
        }
    } while (opcao != 0);

    return 0;
}
