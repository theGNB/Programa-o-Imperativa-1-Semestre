#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{

  int num1, num2, num3, num4, num5;
  float media, sum;
  
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  scanf("%d",&num4);
  scanf("%d",&num5);
  
  sum = (num1 + num2 + num3 + num4 + num5);
  media = sum / 5;
  
  printf("%.3lf\n",media);
  return 0;  

}
