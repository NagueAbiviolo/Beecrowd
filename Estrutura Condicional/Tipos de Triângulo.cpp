#include <bits/stdc++.h>
bool comp(double a, double b) {
    return a > b;
}
int main(){
    double a, b, c, lista[3];
    scanf("%lf %lf %lf", &a, &b, &c);
    lista[0] = a;
    lista[1] = b;
    lista[2] = c;
    std::sort(lista, lista + 3, comp);
    a = lista[0];
    b = lista[1];
    c = lista[2];
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a * a == b * b + c * c) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (a * a > b * b + c * c) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (a * a < b * b + c * c) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && a == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || a == c || b == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}