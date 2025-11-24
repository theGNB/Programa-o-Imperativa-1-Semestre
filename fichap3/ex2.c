#include <stdio.h>

double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    char tipo;
    double temperatura;

    scanf(" %c", &tipo);      
    scanf("%lf", &temperatura); 

    if (tipo == 'F') {
        printf("%.1lf\n", celsiusParaFahrenheit(temperatura));
    } else if (tipo == 'C') {
        printf("%.1lf\n", fahrenheitParaCelsius(temperatura));
    } else {
        printf("NO\n");
    }

    return 0;
}