#include <stdio.h>

int main() {
    int M, k;
    scanf("%d %d", &M, &k);  // 读取初始资金M和规则k

    int days = M;  // 初始化消费天数为初始资金M天
    int extra = M;  // 初始时的可消费金额

    // 模拟消费过程
    while (extra >= k) {
        int new_days = extra / k;  // 计算可以额外得到多少天
        days += new_days;  // 增加这些天数
        extra = extra % k + new_days;  // 更新剩余的钱数
    }

    printf("%d\n", days);  // 输出最终的天数
    return 0;
}
