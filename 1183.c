#include<stdio.h>
#include<math.h>
struct p
{
    int x;
    int y;
    double d;
};
 
int main() {
    int n;
    scanf("%d", &n);
    struct p p[n];
 
 
 
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
        p[i].d = sqrt(pow(p[i].x, 2) + pow(p[i].y, 2));
    }
 
 
    for(int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i].d > p[j].d) {
                struct p temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                 
            }
        }
    }
    for(int i = 0; i < n; i++) {
    printf("(%d,%d)", p[i].x, p[i].y);
    if (i < n - 1) printf(" ");
    }
 
    printf("\n");
 
    return 0;
}