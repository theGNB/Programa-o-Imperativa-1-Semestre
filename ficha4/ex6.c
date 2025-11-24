#include <stdio.h>

long long contar(long long n, int i) {
    if (n == 0) {
        return 0;
    }

    int ultimo = n % 10;
    long long resto = n / 10;

    if (ultimo == i) {
        return 1 + contar(resto, i);
    } else {
        return contar(resto, i);
    }
}

int main() {
    long long n;
    int i;

    if (scanf("%lld", &n) != 1) {
        printf("NO\n");
        return 0;
    }
    if (scanf("%d", &i) != 1 || i < 0 || i > 9) {
        printf("NO\n");
        return 0;
    }

    printf("%lld\n", contar(n, i));
    return 0;
}
