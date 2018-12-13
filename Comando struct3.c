#include<stdio.h>
struct aluno {
 char nome[30];
 char RA[10];
 int idade;
 char sexo;
};
struct aluno le_dados(){
 struct aluno a1;

 printf("\nEntre com o nome do aluno\n");
 scanf("%s", a1.nome);
 printf("\nEntre com o RA do aluno\n");
 scanf("%s", a1.RA);
 printf("\nEntre com a idade do aluno\n");
 scanf("%d", &a1.idade);
 printf("\nEntre com o sexo do aluno\n");
 scanf(" %c", &a1.sexo);
 return a1;
}
int conta_alunos(struct aluno turma[10])
{
 int cont = 0, i;
 for (i=0; i<10; i++){
if (turma[i].idade > 20 && turma[i].sexo == 'f')
 cont++;
 }
 return cont;
}
void main(){
 struct aluno turma[10];
 int i, conta = 0;
 for (i=0; i<10; i++){
turma[i] = le_dados();
 }
 conta = conta_alunos(turma);
 printf("\nNumero de alunos do sexo feminino e com idade acima de 20 anos = %d\n ",conta);
