#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;  
    
    // 输入正整数 n
    scanf("%d", &n);
    
    // 计算并输出 1 到 n 之间的阶乘
    for (int i = 1; i <= n; i++) {
        factorial *= i;  // 计算阶乘
        
        printf("%-4d%-20llu\n", i, factorial);
    }
    
    return 0;
}
