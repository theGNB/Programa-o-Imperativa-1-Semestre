#include <stdio.h>

int conta(int n) {
    if (n < 10)
        return 1;
    return 1 + conta(n / 10);
}

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("NO\n");
        return 0;
    }

    printf("%d\n", conta(n));
    return 0;
}
