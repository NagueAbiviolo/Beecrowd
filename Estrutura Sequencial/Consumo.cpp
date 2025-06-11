#include <stdio.h>
#include <stdlib.h>
int main(){
    int distancia;
    float combustivel, consumo;
    scanf("%d", &distancia);
    scanf("%f", &combustivel);
    consumo = distancia / combustivel;
    printf("%.3f km/l\n", consumo);
}