#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
int a = 0, c = 0, res = 0;
char oper;
scanf("%d %c %d",&a, &oper, &c);
switch( oper )
        {
        case '+':
        res = a + c;
                printf("%d\n", res);
                break;
        case '-':
        res = a - c;
                printf("%d\n", res);
                break;
        case '*':
        res = a * c;
                printf("%d\n", res);
                break;
        case '/':
                if(c != 0)
                {
                res = a /c;
                printf("%d\n", res);
                }
                else
                printf("NO\n");
                break;
        default:
                if(a != 0 && oper != '0' && c != 0)
                printf("NO\n");
        }
  return 0;  

}
