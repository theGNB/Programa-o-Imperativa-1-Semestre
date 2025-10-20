#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double mensalidade = 0, resultado = 0, bonicliente = 0, boniinicidente = 0, penidade = 0;
    int anoscliente = 0, anosincidente = 0, idade = 0, qntanoscliente = 0, qntanosacidente = 0;

    if (scanf("%lf %d %d %d", &mensalidade, &anoscliente, &anosincidente, &idade) != 4) {
        printf("NO\n");
        return 0;
    }

    if (mensalidade <= 0 || anoscliente < 0 || anosincidente < 0 || idade <= 0) {
        printf("NO\n");
        return 0;
    }

    if (anosincidente > anoscliente) {
        printf("NO\n");
        return 0;
    }

    qntanoscliente = anoscliente / 5;
    bonicliente = (qntanoscliente * 0.01) * mensalidade;

    qntanosacidente = anosincidente / 5;
    boniinicidente = (qntanosacidente * 0.01) * mensalidade;

    int residade = (idade + 10) / 10;
    penidade = mensalidade * (residade * 0.05);

    double sumposi = bonicliente + boniinicidente;
    resultado = mensalidade - sumposi + penidade;

    resultado = round(resultado * 100) / 100.0;

    printf("%.2lf\n", resultado);

    return 0;
}
