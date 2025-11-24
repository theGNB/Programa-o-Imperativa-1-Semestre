#include <stdio.h>

// Função para calcular o fatorial
long long int fact(int n) {
    if (n < 0) return -1; // Tratamento de erro para valores negativos
    long long int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Função para calcular a combinação
long long int comb(int n, int k) {
    if (n < 0 || k < 0 || k > n) return -1; // Verifica anomalias
    long long int fn = fact(n);
    long long int fk = fact(k);
    long long int fnk = fact(n - k);
    if (fn == -1 || fk == -1 || fnk == -1) return -1; // Verifica erros nos fatoriais
    return fn / (fk * fnk);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    long long int resultado = comb(n, k);
    if (resultado == -1) {
        printf("NO\n");
    } else {
        printf("%lld\n", resultado);
    }
    return 0;
}