#include<stdio.h>

int ProductOdd(int begin, int end) {
    int productOdd = 1;  
    for (int i = begin; i <= end; i++) { 
        if (i % 2 != 0) {  // 检查是否为奇数
            productOdd *= i;  // 累乘奇数
        }
    }
    return productOdd;  // 返回结果
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);  // 输入区间
    printf("ProductOdd = %d\n", ProductOdd(a, b));  // 输出计算结果
    return 0;
}
