#include <bits/stdc++.h>
int main(){
    int inicio, fim, duracao;
    scanf("%d %d", &inicio, &fim);
    if (inicio > fim){
        duracao = (fim - inicio) + 24;
    }
    else if (inicio == fim){
        duracao = 24;
    }
    else{
        duracao = fim - inicio;
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
}