#include <stdio.h>
#include <stdlib.h>
int main(){
    int L, D, K, P, result, num_pedagios;
    scanf("%d %d", &L, &D);
    scanf("%d %d", &K, &P);
    num_pedagios = L / D;
    result = (K * L) + (P * num_pedagios);
    printf("%d\n", result);
}