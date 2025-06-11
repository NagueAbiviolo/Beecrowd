#include <stdio.h>
#include <stdlib.h>
int main() {
    long long int n, barbantes;
    scanf("%lld", &n);
    barbantes = (n * (n - 3)) / 2;
    printf("%lld\n", barbantes);
}
