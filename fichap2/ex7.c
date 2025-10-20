#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    char sexo;
    double peso;
    int altura;

  
    if (scanf(" %c %lf %d", &sexo, &peso, &altura) != 3) {
        printf("NO\n");
        return 0;
    }

    if (peso <= 0 || altura <= 0) {
        printf("NO\n");
        return 0;
    }

    if (sexo != 'M' && sexo != 'H' && sexo != 'm' && sexo != 'h'){
        printf("NO\n");
        return 0;
    }

    
    double alturam = altura / 100.0;

    
    if (alturam <= 0) {
        printf("NO\n");
        return 0;
    }

    
    double imc = peso / (alturam * alturam);

   
    int obeso = 0;
    if (sexo == 'M' || sexo == 'm') {
        if (imc >= 32.4) obeso = 1;
    } else if (sexo == 'H' || sexo == 'h') {
        if (imc >= 31.2) obeso = 1;
    } else {
        
        printf("NO\n");
        return 0;
    }

    
    printf("%.3lf %s\n", imc, obeso ? "YES" : "NO");

    return 0;
}