#include <bits/stdc++.h>
int main(){
    int inicioh, iniciom, fimh, fimm, duracaoh, duracaom;
    scanf("%d %d %d %d", &inicioh, &iniciom, &fimh, &fimm);
    if (inicioh > fimh || (inicioh == fimh && iniciom > fimm)){
        duracaoh = (fimh - inicioh) + 24;
    }
    else if (inicioh == fimh && iniciom == fimm){
        duracaoh = 24;
    }
    else{
        duracaoh = fimh - inicioh;
    }
    if (iniciom > fimm){
        duracaom = (fimm - iniciom) + 60;
        duracaoh--;
    }
    else if (iniciom == fimm){
        duracaom = 0;
    }
    else{
        duracaom = fimm - iniciom;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoh, duracaom);
}