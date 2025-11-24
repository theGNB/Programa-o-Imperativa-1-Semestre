#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int a, b;

    if (scanf("%d", &a) != 1) { printf("NO\n"); return 0; }
    if (scanf("%d", &b) != 1) { printf("NO\n"); return 0; }

    printf("%d\n", mdc(a, b));
    return 0;
}
