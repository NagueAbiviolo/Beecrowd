#include <bits/stdc++.h>
int main(){
    int renda;
    double imposto;
    scanf("%d", &renda);
    if (renda <= 2000){
        printf("Isento\n");
    }
    else if (renda <= 3000){
        imposto = (renda - 2000) * 0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else if (renda <= 4500){
        imposto = (renda - 3000) * 0.18 + 80;
        printf("R$ %.2lf\n", imposto);
    }
    else{
        imposto = (renda - 4500) * 0.28 + 350;
        printf("R$ %.2lf\n", imposto);
    }
}