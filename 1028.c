#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    
    // 判断闰年条件
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}