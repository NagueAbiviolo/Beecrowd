#include <stdio.h>
#include <stdlib.h>
int main(){
    int tempo, horas = 0, minutos = 0, segundos = 0;
    scanf("%d", &tempo);
    while (tempo >= 3600){
        horas++;
        tempo -= 3600;
    }
    while (tempo >= 60){
        minutos++;
        tempo -= 60;
    }
    while (tempo >= 1){
        segundos++;
        tempo -= 1;
    }
    printf("%d:%d:%d\n", horas, minutos, segundos);    
}