#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    if (x == y) {
        printf("IGUAL\n");
        return 0;
    }

    int xPar = (x % 2 == 0);
    int yPar = (y % 2 == 0);

    if (xPar && !yPar) {
        printf("MAIOR\n");
        return 0;
    }
    if (!xPar && yPar) {
        printf("MENOR\n");
        return 0;
    }

    if (xPar && yPar) {
        if (x == 0 && y != 0) {
            if (y > 0) printf("MENOR\n");
            else printf("MAIOR\n");
            return 0;
        }
        if (y == 0 && x != 0) {
            if (x > 0) printf("MAIOR\n");
            else printf("MENOR\n");
            return 0;
        }

        int xDiv3 = (x % 3 == 0);
        int yDiv3 = (y % 3 == 0);

        if (xDiv3 && !yDiv3) { printf("MAIOR\n"); return 0; }
        if (!xDiv3 && yDiv3) { printf("MENOR\n"); return 0; }

        if (xDiv3 && yDiv3) {
            if (x < y) printf("MENOR\n");
            else printf("MAIOR\n");
            return 0;
        }

        if (!xDiv3 && !yDiv3) {
            if (x > y) printf("MENOR\n");
            else printf("MAIOR\n");
            return 0;
        }
    }

    if (!xPar && !yPar) {
        int xDiv5 = (x % 5 == 0);
        int yDiv5 = (y % 5 == 0);

        if (!xDiv5 && yDiv5) { printf("MENOR\n"); return 0; }
        if (xDiv5 && !yDiv5) { printf("MAIOR\n"); return 0; }

        if (xDiv5 && yDiv5) {
            if (x < y) printf("MENOR\n");
            else printf("MAIOR\n");
            return 0;
        }

        if (!xDiv5 && !yDiv5) {
            if (x > y) printf("MENOR\n");
            else printf("MAIOR\n");
            return 0;
        }}

    return 0;
}
