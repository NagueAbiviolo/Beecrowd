#include <stdio.h>
#include <stdlib.h>
int main(){
    double A, B, C, area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
    scanf("%lf %lf %lf", &A, &B, &C);
    area_triangulo = (A * C) / 2;
    area_circulo = 3.14159 * (C * C);
    area_trapezio = ((A + B) * C) / 2;
    area_quadrado = B * B;
    area_retangulo = A * B;
    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);
}