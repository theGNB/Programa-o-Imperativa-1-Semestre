#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    double p1 = 2.49;
    double p2 = p1 * 0.95;
    double p3 = p2 * 0.93;
    double p4 = p3 * 0.90;
    double total = 0.0;

    if (n <= 50) {
        total = n * p1;
    }
    else if (n <= 100) {
        total = 50 * p1 + (n - 50) * p2;
    }
    else if (n <= 200) {
        total = 50 * p1 + 50 * p2 + (n - 100) * p3;
    }
    else {
        total = 50 * p1 + 50 * p2 + 100 * p3 + (n - 200) * p4;
    }

    printf("%.2f\n", total);
    return 0;
}
