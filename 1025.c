#include <stdio.h>

int main() {
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    
    
    char max = a;

    
    if (b > max) max = b;
    if (c > max) max = c;
    
    printf("%c\n", max);
    
    return 0;
}
