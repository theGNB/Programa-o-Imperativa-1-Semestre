#include <stdio.h>

int main() {
    int a, b, c, d, final;
    double dcalc;

    if (scanf("%d", &a) != 1) { printf("NO\n"); return 0; }
    if (scanf("%d", &b) != 1) { printf("NO\n"); return 0; }
    if (scanf("%d", &c) != 1) { printf("NO\n"); return 0; }

    if (a < 0 || a > 20 || b < 0 || b > 20 || c < 0 || c > 20) {
        printf("NO\n");
        return 0;
    }

    dcalc = a * 0.4 + b * 0.6;
    d = (int)(dcalc + 0.5);

    if (d >= 10)
        final = (d > c) ? d : c;
    else
        final = c;

    if (final < 0 || final > 20) {
        printf("NO\n");
        return 0;
    }

    printf("%d\n", final);
    return 0;
}
