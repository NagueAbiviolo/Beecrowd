#include <bits/stdc++.h>
int main(){
    int id, quantidade;
    double valor;
    scanf("%d %d", &id, &quantidade);
    if (id == 1) {
        valor = 4 * quantidade;
    } else if (id == 2) {
        valor = 4.5 * quantidade;
    } else if (id == 3) {
        valor = 5 * quantidade;
    } else if (id == 4) {
        valor = 2 * quantidade;
    } else if (id == 5) {
        valor = 1.5 * quantidade;
    }
    printf("Total: R$ %.2lf\n", valor);
}