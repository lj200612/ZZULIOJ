#include<stdio.h>
int main(){

   long long int n, m, a, b;

    scanf("%d %d", &n, &m);

   long long int o_n = n;
   long long int o_m = m;
    while (1) {
        a = n % m;
        n = m;
        m = a;
        b = (o_m * o_n) / n;
        if(a == 0){
            b = (o_m * o_n) / n;
            printf("%d %d", n, b);
            break;
        }
    }    
    return 0;
}