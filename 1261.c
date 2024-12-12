#include<stdio.h>
int main() {
    int T;
    scanf("%d", &T);  //读取所有样例数量

    while (T--) {
        int m;
        scanf("%d", &m);  //读取总数字数量


        int pre, count=1;  //pre储存当前数字，count为当前数字数量
        scanf("%d", &pre);

        for (int i = 1; i < m; i++) {
            int current;  //储存当前字母
            scanf("%d", &current);

            if (current == pre) {
                count++;
            } else {
                // 如果不同输出前一个数字及其出现次数，
                printf("%d %d ", count, pre);
                pre = current;
                count = 1;

            }
        }
     //输出最后一个数字和出现次数
     printf("%d %d\n", count, pre);

    }

}