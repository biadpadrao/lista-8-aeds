/* Crie um programa que receba dados de vários alunos (Matricula e Telefone) e armazene em um  arquivo  texto.  Crie  no  mesmo  programa  uma 
opção  de  ler  dados  de  um  arquivo  já armazenado dados de alunos. */

#include <stdio.h>

int main(void) {
  FILE *arq;
  FILE *alunos;
  int alu, ma, te;
  char l;
  arq = fopen("texto.txt", "w"); 
  alunos = fopen("alunos.txt", "r"); 
  printf("Digite a quantidade de alunos: ");
  scanf("%d", &alu);
  for (int i=0; i<alu; i++) {
    printf("\nDigite sua matrícula: ");
    scanf("%d", &ma);
    printf("Digite seu telefone: ");
    scanf("%d", &te);
    fprintf(arq, "%d %d\n", ma, te);
  }
  
  printf("\nSerá lido um arquivo já existente, que possui dados de alunos? ");
  scanf(" %c", &l);
  while (fscanf(alunos, "%d %d\n", &ma, &te) != EOF){
    if (l == ('s')) {
      printf ("%d %d\n", ma, te);
    } 
  }
  if (l != 's') {
      printf("erro\n");
  }
  fclose(alunos);
  fclose(arq);
  return 0;
}
