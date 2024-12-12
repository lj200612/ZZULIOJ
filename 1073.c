#include<stdio.h>
int main() {
    int h, l;
    scanf("%d %d", &h, &l);

    
    int f = 0;

    for (int r = 1; r < h; r++) {
        int c = h - r;

        if ( (2 * c) + (4 * r) == l) {
            f = 1;
            printf("%d %d\n", c, r);
        }
    }
    if(!f) {
        printf("No Answer\n");
    }
    return 0;
}