#include <bits/stdc++.h>    
int main(){
    double salario, aumento, novoSalario;
    scanf("%lf", &salario);
    if (salario <= 400){
        aumento = salario * 0.15;
    }
    else if (salario <= 800){
        aumento = salario * 0.12;
    }
    else if (salario <= 1200){
        aumento = salario * 0.10;
    }
    else if (salario <= 2000){
        aumento = salario * 0.07;
    }
    else{
        aumento = salario * 0.04;
    }
    novoSalario = salario + aumento;
    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", aumento);
    printf("Em percentual: %.0lf %\n", (aumento / salario) * 100);
}