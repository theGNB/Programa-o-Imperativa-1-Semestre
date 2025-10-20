#include <stdio.h>

int main() {
    char c1, c2, c3;
    int global;

    if (scanf(" %c", &c1) != 1) { printf("NO\n"); return 0; }
    if (scanf(" %c", &c2) != 1) { printf("NO\n"); return 0; }
    if (scanf(" %c", &c3) != 1) { printf("NO\n"); return 0; }
    if (scanf("%d", &global) != 1) { printf("NO\n"); return 0; }

    if (global < 0 || global > 20) { printf("NO\n"); return 0; }
    if (!(c1 >= 'A' && c1 <= 'E' && c2 >= 'A' && c2 <= 'E' && c3 >= 'A' && c3 <= 'E')) { printf("NO\n"); return 0; }

    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;
    char notas[3] = {c1, c2, c3};
    for (int i = 0; i < 3; i++) {
        if (notas[i] == 'A') countA++;
        else if (notas[i] == 'B') countB++;
        else if (notas[i] == 'C') countC++;
        else if (notas[i] == 'D') countD++;
        else if (notas[i] == 'E') countE++;
    }

    int ok = 0;

    if (global == 20 && countA == 3) ok = 1;
    else if (global == 19 && countA == 2 && countB == 1) ok = 1;
    else if (global >= 17 && global <= 18 && ((countB == 3) || (countB == 2 && countA == 1))) ok = 1;
    else if (global >= 14 && global <= 16 && countC >= 1 && countE == 0 && countD == 0 && countB <= 1) ok = 1;
    else if (global >= 10 && global <= 13 && countD >= 1 && countE == 0) ok = 1;
    else if (global <= 9 && countE >= 1) ok = 1;

    if (ok) printf("OK\n");
    else printf("NOT OK\n");

    return 0;
}
