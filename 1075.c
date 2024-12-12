#include<stdio.h>
int main() {
    int n, cost;
    scanf("%d %d", &n, &cost);
    int f = 0;


    for (int m = 0; m <= n; m++) {
        for (int w = 0; w <= n - m; w++) {
            int t = n -w - m;
            if ( (1 * t) + (3 * m) + (2 * w) == cost ) {
                f = 1;
                printf("%d %d %d\n",m, w, t);

            }
        }
    }

    if(!f) {
        printf("No Answer\n");
    }

    return 0;
}