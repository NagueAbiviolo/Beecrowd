#include <bits/stdc++.h>
int main(){
    double a, b, c, d, media;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    media = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
    printf("Media: %.1lf\n", media);
    if (media >= 7){
        printf("Aluno aprovado.\n");
    }
    else if (media < 5){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        double exame;
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media + exame) / 2;
        if (media >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", media);
    }
}