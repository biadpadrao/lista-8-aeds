/* Crie  um  programa  que  escreva  de  1  até  10  em  um  arquivo,  armazenando  um  número  por linha. */
#include <stdio.h>

int main(void) {
  FILE *pont_arq;
  pont_arq = fopen("arquivo.txt", "w");
  for (int i = 0; i < 10; i++) {
    fprintf(pont_arq, "%d\n", i + 1);
  }
  printf("Arquivo gerado com sucesso!");
  fclose(pont_arq);
  return 0;
}
