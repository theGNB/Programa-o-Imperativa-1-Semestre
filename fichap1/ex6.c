#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
    double a, b, c, xv, yv;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    xv = -b / (2 * a);
    yv = (-(b * b - 4 * a * c)) / (4 * a);

    printf("%.3lf %.3lf\n", xv, yv);
    return 0;

}
