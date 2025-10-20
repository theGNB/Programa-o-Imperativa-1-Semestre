#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(void)
{

  char sexo;
  double peso = 0, imc = 0, a = 0, b = 0, c =0;
  int altura = 0;
    if (scanf("%c %lf %d",&sexo, &peso, &altura) != 3){
        printf("NO\n");
        return 0;
    }

    if(sexo != 'M' && sexo != 'H'){
        printf("NO\n");
        return 0;
    }

    if(peso <= 0){
        printf("NO\n");
        return 0;
    } 

    if(altura <= 0){
        printf("NO\n");
        return 0;
    } 


    a = altura;
    b = a*0.01;
    c = b * b;  
    imc = (peso / c);


    switch( sexo )
            {
                case 'H':
                        if(imc >= 31.2){
                            printf("%.3lf YES\n", imc);
                        } else 
                            printf("%.3lf NO\n", imc);
                        break;
                case 'M':
                        if(imc >= 32.4){
                            printf("%.3lf YES\n", imc);
                        } else 
                            printf("%.3lf NO\n", imc);
                        break;
                default:
                            printf("NO\n", imc);
                        break;
            }
return 0;  

}
