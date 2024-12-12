#include <stdio.h>


int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  
        n = n / 10;     
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

   
    while (n >= 10) {  
        n = digitSum(n);
    }

    
    printf("%d\n", n);

    return 0;
}
