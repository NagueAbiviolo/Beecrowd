#include <stdio.h>
#include <stdlib.h>
int main() {
    int S, T, F, chegada;
    scanf("%d %d %d", &S, &T, &F);
    chegada = ((S + T + F) % 24 + 24) % 24;
    printf("%d\n", chegada);
}
