#include <bits/stdc++.h>
int main(){
    int lista[3], a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    lista[0] = a;
    lista[1] = b;
    lista[2] = c;
    std::sort(lista, lista + 3);
    printf("%d\n", lista[0]);
    printf("%d\n", lista[1]);
    printf("%d\n", lista[2]);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}