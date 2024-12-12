#include<stdio.h>
int main(){
    int t, n, a;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int sum = 0;
        scanf("%d", &n);
        for(int c = 0; c < n; c++) {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}