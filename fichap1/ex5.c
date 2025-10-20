#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
   int num, soma;

   scanf("%d",&num);

  soma=0;

  while(num>0)
  {
    soma+=num%10;
    num/=10;
  }

  printf("%d\n",soma);
  return 0;

}
