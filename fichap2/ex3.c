#include <stdio.h>

int main() {
    long long segundos, dias;
    int horas, minutos, seg;
    if (scanf("%lld", &segundos) != 1) {
        printf("NO\n");
        return 0;
    }
    if (segundos < 0) {
        printf("NO\n");
        return 0;
    }
    dias = segundos / 86400;
    segundos %= 86400;
    horas = segundos / 3600;
    segundos %= 3600;
    minutos = segundos / 60;
    segundos %= 60;
    seg = segundos;
    printf("%lld:%d:%d:%d\n", dias, horas, minutos, seg);
    return 0;
    
}
