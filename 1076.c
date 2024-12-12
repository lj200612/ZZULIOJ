#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int f = 0;


    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {
            for (int z = 0; z < 9; z++) {
                if ( (x * 100) + (y *110) + (z *12) == n) {
                    f = 1;
                    printf("%4d %4d %4d\n", x, y, z);
                }
            }
        }
    }

    if(!f) {
        printf("No Answer\n");
    }

    return 0;

}