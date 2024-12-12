#include<stdio.h>
int main() {
    int high, up, down;
    int d = 0;
    int n = 0;
    scanf("%d %d %d", &high, &up, &down);

    
    while (d < high) {
        d += up;
        n += 1;
    if (d >= high) {
        printf("%d",n);
        break;
    }
    d -= down;
 }

    return 0;
}