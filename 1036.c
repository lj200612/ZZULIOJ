#include <stdio.h>

int main() {
    int y, m;
    scanf("%d %d", &y, &m);  

    // 判断是否是闰年
    int isLeap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    if (m == 2) {  
        if (isLeap) {
            printf("29\n");  
        } else {
            printf("28\n"); 
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("30\n");  
    } else {
        printf("31\n"); 
    }

    return 0;
}
