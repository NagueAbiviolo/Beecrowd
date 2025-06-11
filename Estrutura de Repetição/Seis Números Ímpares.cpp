#include <bits/stdc++.h>
int main(){
    int x, imp = 0;
    scanf("%d", &x);
    while(imp < 6){
        if(x % 2 == 1){
            printf("%d\n", x);
            imp++;
        }
        x++;
    }

}