#include <stdio.h>
#include <stdlib.h>
int main(){
    double A, B, aumento;
    scanf("%lf %lf", &A, &B);
    aumento = (B/A) - 1;
    aumento *= 100;
    printf("%.2lf%\n", aumento);
}