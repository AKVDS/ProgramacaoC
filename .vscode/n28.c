#include <stdio.h>
int main (){

    int index;
    char *nomesdeAlunos [3][3] = {
     {"aluno 0", "pt:30", "mat:90"}, 
     {"aluno 1", "pt:60", "mat:60"},
     {"aluno 2", "pt:90", "mat:30"}
};

printf("Digite o número do aluno que queira ver as notas: \n");
printf("Para aluno 0 digite: 0. \n");
printf("Para aluno 1 digite: 1. \n");
printf("Para aluno 2 digite: 2. \n");

scanf("%d", &index);
printf("As notas do %s são: %s, %s \n", nomesdeAlunos [index][0], nomesdeAlunos [index][1], nomesdeAlunos [index][2]);
    
return 0;
}