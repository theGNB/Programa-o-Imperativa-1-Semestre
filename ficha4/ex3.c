#include <stdio.h>

int soma(int n) {
    if (n <= 0)
        return 0;
    return n + soma(n - 1);
}

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        printf("NO\n");
        return 0;
    }

    printf("%d\n", soma(n));
    return 0;
}
