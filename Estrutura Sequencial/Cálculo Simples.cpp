#include <stdio.h>
#include <stdlib.h>
int main(){
    int id1, qnt1, id2, qnt2;
    float valor1, valor2, total;
    scanf("%d %d %f", &id1, &qnt1, &valor1);
    scanf("%d %d %f", &id2, &qnt2, &valor2);
    total = (qnt1 * valor1) + (qnt2 * valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}