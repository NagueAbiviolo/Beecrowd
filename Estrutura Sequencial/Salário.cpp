#include <stdio.h>
#include <stdlib.h>
int main(){
    int id, horas;
    float valor_hora, salario;
    scanf("%d", &id);
    scanf("%d", &horas);
    scanf("%f", &valor_hora);
    salario = horas * valor_hora;
    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2f\n", salario);
}