/* Faça um programa que solicite ao usuário um número, em seguida, imprima na tela todos os seus divisores. Salve em um arquivo texto a soma total desses divisores */

#include <stdio.h>

int main(void) {
  FILE *arq;
  int n;
  int sum=0;
  arq = fopen("texto.txt", "w");
  printf("Digite um número: ");
  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    if (n % i == 0) { 
      printf("Divisor de %d: %d\n", n, i);
      sum += i;
    }
  }
  fprintf(arq, "%d", sum);
  fclose(arq);
  return 0;
}
