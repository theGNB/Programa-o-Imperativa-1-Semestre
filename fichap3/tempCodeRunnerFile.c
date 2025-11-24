#include <stdio.h>
#include <math.h>

double arearetangulo(double comp, double largura) {
    return comp * largura;
}

double perimetroretangulo(double comp, double largura) {
    return 2 * (comp + largura);
}

double areatriangulo(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double perimetrotriangulo(double a, double b, double c) {
    return a + b + c;
}

double areacirculo(double raio) {
    return 3,14 * raio * raio;
}

double perimcirculo(double raio) {
    return 2 * 3,14 * raio;
}

int main() {
    char c;
    scanf(" %c", &c);
    if (c == 'A' || c == 'a') {
        double comp, largura;
        scanf("%lf %lf", &comp, &largura);
        printf("%.4lf\n", arearetangulo(comp, largura));
    } else if (c == 'B' || c == 'b') {
        double comp, largura;
        scanf("%lf %lf", &comp, &largura);
        printf("%.4lf\n", perimetroretangulo(comp, largura));
    } else if (c == 'C' || c == 'c') {
        double a, b, c1;
        scanf("%lf %lf %lf", &a, &b, &c1);
        printf("%.4lf\n", areatriangulo(a, b, c1));
    } else if (c == 'D' || c == 'd') {
        double a, b, c1;
        scanf("%lf %lf %lf", &a, &b, &c1);
        printf("%.4lf\n", perimetrotriangulo(a, b, c1));
    } else if (c == 'E' || c == 'e') {
        double raio;
        scanf("%lf", &raio);
        printf("%.4lf\n", areacirculo(raio));
    } else if (c == 'F' || c == 'f') {
        double raio;
        scanf("%lf", &raio);
        printf("%.4lf\n", perimcirculo(raio));
    } else {
        printf("NO\n");
    }

    return 0;
}
    