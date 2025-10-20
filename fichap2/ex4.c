#include <stdio.h>

int rank(int x) {
    int score = 0;
    int isEven = (x % 2 == 0);
    int isZero = (x == 0);

    if (isEven) score += 2000000;

    if (!(isEven && isZero)) {
        if (x % 3 == 0) score += 800000;
        if (x % 5 == 0) score += 400000;
        if (x % 7 == 0) score += 200000;
    }

    score += x;
    return score;
}

int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a == b) {
        printf("MAIOR\n");
        return 0;
    }

    int ra = rank(a);
    int rb = rank(b);

    if (ra < rb) printf("MENOR\n");
    else         printf("MAIOR\n");

    return 0;
}
