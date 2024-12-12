#include<stdio.h>
int main() {
    int a, k, b, m;
    scanf("%d %d %d %d", &a, &k, &b, &m);
    int c = a * k;
    int d = b * m;
    if (c > d){
        printf("N0\n");
    } else {
        printf("YES\n");
    }
}