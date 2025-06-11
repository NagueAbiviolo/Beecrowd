#include <stdio.h>
#include <stdlib.h>
int main(){
    int T1, T2, T3, T4, result;
    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);
    result = (T1 + T2 + T3 + T4) - 3;
    printf("%d\n", result);
}