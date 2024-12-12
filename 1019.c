#include<stdio.h>

int main() {
    int t;  
    int s = 50;  
    int tc;  
    

    scanf("%d", &t);

   
    if (t >= 30) {
        s = 48;  
    }

    
    tc = t * s;

    
    printf("%d\n", tc);

    return 0;
}
