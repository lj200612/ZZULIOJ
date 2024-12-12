#include <stdio.h>
#include <math.h> 
 
int main() {
    int a, b, c;
     
    
    scanf("%d %d %d", &a, &b, &c);
     
    
    int m = a;
     
   
    if (abs(b) > abs(m)) {
        m = b;
    }
     
 
    if (abs(c) > abs(m)) {
        m = c;
    }
     
 
    printf("%d\n", m);
     
    return 0;
}