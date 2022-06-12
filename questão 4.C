/* Implemente um programa que leia um arquivo texto e imprima, linha a linha, o seu conteúdo na tela. Imprima também a quantidade de linhas que este arquivo possui */

#include <stdio.h>

int main(void) {
  FILE *pont_arq;
  char t;
  int cont = 0;
  pont_arq = fopen("texto.txt", "r");
  while ((t = fgetc(pont_arq)) != EOF) { 
    printf("%c", t);
    if (t == '\n'){
      cont++;
    }
  }
  printf("\nQuantidade de linhas: %d", cont);
  fclose(pont_arq);
  return 0;
}
