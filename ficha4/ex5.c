#include <stdio.h>

double termo(int k) {
    double num = (2.0 * k) * (2.0 * k);
    double den = (2.0 * k - 1) * (2.0 * k + 1);
    return num / den;
}

double wallis(int k) {
    if (k == 1)
        return termo(1);
    return termo(k) * wallis(k - 1);
}

int main() {
    int k;
    if (scanf("%d", &k) != 1 || k < 1) {
        printf("NO\n");
        return 0;
    }

    double result = 2.0 * wallis(k);
    printf("%.12lf\n", result);

    return 0;
}
