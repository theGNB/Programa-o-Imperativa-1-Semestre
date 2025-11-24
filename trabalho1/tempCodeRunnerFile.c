#include<stdio.h>
#include<stdlib.h>

int func_f(int dig, int a, int b, int c) {
    return a * dig * dig + b * dig + c;
}

void executar(int n, int a, int b, int c, int limite) {
    printf("%d\n", n);
    if (n < 10 || limite <= 0) return;
    int prox = func_F(n, a, b, c);
    if (prox == n) return;
    executar(prox, a, b, c, limite - 1);
}

int func_F(int n, int a, int b, int c) {
    if (n == 0){
         return 0;
    }
    int soma = somatorio(n, a, b, c);
    if (n % 2 == 0){
        return soma;
    }
    int prod = produtorio(n, a, b, c);
    return (soma == 0) ? 0 : (prod % soma);
}

int somatorio(int num, int a, int b, int c) {
    if (num == 0){
        return 0;
    }
    return func_f(num % 10, a, b, c) + somatorio(num / 10, a, b, c);        
}

int produtorio(int num, int a, int b, int c) {
    if (num == 0){ 
        return 1;
    }
    int ultimo = num % 10;
    int resto = produtorio(num / 10, a, b, c);
    if (ultimo == 0){
        return resto;
    }
    return func_f(ultimo, a, b, c) * resto;
}

int main() {
    int n, a, b, c, L;
    if (scanf("%d %d %d %d %d", &n, &a, &b, &c, &L) != 5)
        return 0;
    executar(n, a, b, c, L);

    return 0;
}
