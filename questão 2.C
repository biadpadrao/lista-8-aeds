/* Crie um programa que receba um texto do usuário e grave o texto em um arquivo */
#include <stdio.h>

int main(void) {
  FILE *pont_arq;
  char t[100];
  pont_arq = fopen("arquivo.txt", "w");
  printf("Digite um texto: ");
  scanf("%[^\n]", t);
  fprintf(pont_arq, "%s", t);
  fclose(pont_arq);
  return 0;
}
