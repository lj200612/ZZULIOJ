#include<stdio.h>
int main() {
    long long int n;
    while (scanf("%d", &n) != EOF) {
        int a = 1;
        while(n--){
            long long int d;
            scanf("%d", &d);
            if (d % 2 == 1) {
                a *= d;
                 
            }
        }
    printf("%d\n", a);
    }
return 0;

}