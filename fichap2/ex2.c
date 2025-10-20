#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3;
    float sum;
    if (scanf("%d", &num1) != 1 || scanf("%d", &num2) != 1 || scanf("%d", &num3) != 1) {
        printf("NO\n");
        return 0;
    }
    if (num1 < 0 || num1 > 20 || num2 < 0 || num2 > 20 || num3 < 0 || num3 > 20) {
        printf("NO\n");
        return 0;
    }
    sum = (num1 * 0.5) + (num2 * 0.3) + (num3 * 0.2);
    int final = (int)(sum + 0.5);
    printf("%d\n", final);
    return 0;

}
