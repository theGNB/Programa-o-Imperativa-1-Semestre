#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
  float valor, desconto, preco;
  
  scanf("%f",&valor);
  scanf("%f",&desconto);

    preco =  valor - (valor * (desconto / 100));

  printf("%.2lf\n",preco);
  return 0;

}
