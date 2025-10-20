#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, d, distancia;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    distancia = abs(a - c) + abs(b - d);

    printf("%d\n", distancia);
    return 0;

}
