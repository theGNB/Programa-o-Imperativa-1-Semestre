#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(void)
{
  float valor, resultado;
  
  scanf("%f",&valor);

    resultado = (2 * tan(valor)) / (1 + pow(tan(valor), 2));

  printf("%.3lf\n",resultado);
  return 0;

}
