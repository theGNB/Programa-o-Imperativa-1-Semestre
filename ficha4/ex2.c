#include <stdio.h>

int sd(int n) {
    if (n < 0)
        return sd(-n);

    if (n >= 0 && n <= 9)
        return n;

    return (n % 10) + sd(n / 10);
}

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        printf("NO\n");
        return 0;
    }

    printf("%d\n", sd(n));
    return 0;
}
