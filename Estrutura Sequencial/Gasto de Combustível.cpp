#include <stdio.h>
#include <stdlib.h>
int main(){
    int tempo, velocidade;
    float combustivel;
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    combustivel = (tempo * velocidade) / 12.0;
    printf("%.3f\n", combustivel);

}