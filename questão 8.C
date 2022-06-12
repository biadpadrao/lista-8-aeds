/* Crie um programa que leia a quantidade de veículos que uma locadora de veículos possui e o valor que ela cobra por cada aluguel, mostrando as informações pedidas a seguir: 
 - Sabendo-se que um terço dos veículos são alugados por mês, exiba o faturamento anual da locadora 
 - Quando o cliente atrasa a entrega, é cobrada uma multa de 20% sobre o valor do aluguel. Sabendo que um décimo dos veículos alugados no mês é
   devolvido com atraso, calcule o valor ganho com multas no mês 
 - Sabe-se ainda que 2% dos veículos precisam de manutenção ao longo do ano. Calcule o valor  gasto  com  a  manutenção  anual,  sabendo  que
 o  valor  gasto  em  média  com  a manutenção é de R$ 600,00. 
Além de mostrar os resultados na tela,  grave em  um arquivo  chamado resultado.txt. Cada valor deverá ser armazenado em uma linha */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *relatorio;
  int carros;
  double ta=0;
  relatorio = fopen("resultado.txt","w");
  printf("Digite o total de carros da locadora: ");
  scanf("%d", &carros);
  
  double aluguel[carros];
  for (int i=0; i<carros; i++){
    printf("Digite o valor do aluguel do %d carro: ", i+1);
    scanf("%lf", &aluguel[i]);
    ta += aluguel[i];
  }
  
  double tc=carros;
  printf("\nFaturamento anual da locadora: R$ %.2lf\n", (((tc/3)*ta)*12));
  fprintf(relatorio,"Faturamento anual da locadora: R$ %.2lf\n", (((tc/3)*ta)*12));
  printf("\nValor ganho com multas no mês: R$ %.2lf\n", (tc/30)*(0.2*ta));
  fprintf(relatorio,"Valor ganho com multas no mês: R$ %.2lf\n", (tc/30)*(0.2*ta));
  printf("\nValor gasto com manutenção de veículos: R$ %.2lf\n", (0.02*tc)*(600));
  fprintf(relatorio, "Valor gasto com manutenção de veículos: R$ %.2lf", (0.02*tc)*(600));

  fclose(relatorio);
}
