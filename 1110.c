#include <stdio.h>


int common(int x, int y) {
    if (x == y) return x;
    
    if (x > y) return common(x / 2, y);

    return common(x, y / 2);
}

int main() {
    int x, y;
   
    scanf("%d %d", &x, &y);

    
    printf("%d\n", common(x, y));

    return 0;
}
