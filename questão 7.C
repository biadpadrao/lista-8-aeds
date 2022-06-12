/* Faça um programa para inserir N letras informadas pelo usuário em um arquivo texto (N  é  uma  quantidade  de  letras  definida  pelo  usuário). Depois  de
inseridas  as  N  letras,  o programa deverá ler todas as N letras do arquivo, calcular e mostrar a quantidade de vogais, ou seja, quantas letras a, e, i, o, u.*/

#include <stdio.h>

int main(void) {
  FILE *pont_arq;
  FILE *soma;
  int n;
  char l;
  int cont = 0;
  pont_arq = fopen("texto.txt", "w");
  printf("Digite quantas letras terá o texto: ");
  scanf("%d", &n);
  for (int i=0; i<n; i++){
    printf("Digite as letras: ");
    scanf(" %c", &l);
    fprintf(pont_arq, "%c", l); 
  }
  fclose(pont_arq);
  
  soma = fopen("texto.txt", "r");
  while (fscanf (soma, "%c", &l) != EOF) {
    if ((l == 'a') || (l == 'e') || (l == 'i') || (l == 'o') || (l == 'u') || (l == 'A') || (l == 'E') || (l == 'I') || (l == 'O') || (l == 'U')) {
      cont++;
    }
  }
  printf("\nQuantidade de vogais: %d", cont);
  fclose(soma);
  return 0;
}
