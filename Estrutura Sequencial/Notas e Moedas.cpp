#include <bits/stdc++.h>
int main()
{
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m100 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0, quantidade = 0;
    double valor;
    scanf("%lf", &valor);
    quantidade = int(valor * 100);
    n100 = quantidade / 10000;
    quantidade %= 10000;
    n50 = quantidade / 5000;
    quantidade %= 5000;
    n20 = quantidade / 2000;
    quantidade %= 2000;
    n10 = quantidade / 1000;
    quantidade %= 1000;
    n5 = quantidade / 500;
    quantidade %= 500;
    n2 = quantidade / 200;
    quantidade %= 200;
    m100 = quantidade / 100;
    quantidade %= 100;
    m50 = quantidade / 50;
    quantidade %= 50;
    m25 = quantidade / 25;
    quantidade %= 25;
    m10 = quantidade / 10;
    quantidade %= 10;
    m5 = quantidade / 5;
    quantidade %= 5;
    m1 = quantidade / 1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);
}