#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
  int a = 0, b= 0, c = 0, d = 0;
  int menor =0, meio=0, maior=0;
     scanf("%d %d %d %d",&a, &b, &c, &d);



    if (b < c && c < d)
        {
        menor = b;
        meio = c;
        maior = d;
        } else if (d < c && c < b) {
            menor = d;
            meio = c;
            maior = b;
        } else if (c < b && b < d) {
            menor = c;
            meio = b;
            maior = d;
        } else if (d < b && b < c) {
            menor = d;
            meio = b;
            maior = c;
        }  else if (b < d && d < c) {
            menor = b;
            meio = d;
            maior = c;
        } else {
            menor = c;
            meio = d;
            maior = b;
        }
        if(a < 0){
            printf("%d %d %d\n", maior, meio, menor);
        }else{
            printf("%d %d %d\n", menor, meio, maior);
        }   
  return 0;  

}
