#include <bits/stdc++.h>
int main(){
    int ontem, antesDeOntem;
    scanf("%d %d", &antesDeOntem, &ontem);
    if (ontem >=0 && ontem <=2) printf("nova\n");
    else if(antesDeOntem <= ontem && (ontem > 2 && ontem <= 96)) printf("crescente\n");
    else if(ontem > 96 && ontem <= 100) printf("cheia\n");
    else if(antesDeOntem > ontem && (ontem <= 96 && ontem > 2)) printf("minguante\n");
}    