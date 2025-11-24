#include <stdio.h>

int regra1(int m) {
    if (m % 2 == 0)
        return m / 2;
    return -1;
}

int regra2(int m) {
    if (m % 3 == 0 || m % 4 == 0) {
        int x = (m / 10) % 10;
        int y = m % 10;
        return x * y;
    }
    return -1;
}

int regra3(int m) {
    if (m % 5 == 0)
        return 42;
    return -1;
}

int menor(int a, int b) {
    if (a == -1) return b;
    if (b == -1) return a;
    return a < b ? a : b;
}

int buscar(int m, int passos) {
    if (m == 42)
        return passos;

    if (m <= 0)
        return -1;

    if (passos > 50)  
        return -1;

    int r1 = regra1(m);
    int r2 = regra2(m);
    int r3 = regra3(m);

    int best = -1;

    if (r1 != -1)
        best = menor(best, buscar(r1, passos + 1));

    if (r2 != -1)
        best = menor(best, buscar(r2, passos + 1));

    if (r3 != -1)
        best = menor(best, buscar(r3, passos + 1));

    return best;
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        printf("NO\n");
        return 0;
    }

    int resultado = buscar(N, 0);

    if (resultado == -1)
        printf("BAD LUCK\n");
    else
        printf("%d\n", resultado);

    return 0;
}
