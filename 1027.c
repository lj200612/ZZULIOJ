#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    
    int baiwei = num / 100;          // 百位
    int shiwei = (num / 10) % 10;        // 十位
    int gewei = num % 10;               // 个位

    
    int sum = baiwei * baiwei * baiwei + 
              shiwei * shiwei * shiwei + 
              gewei * gewei * gewei;

    
    if (sum == num) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
