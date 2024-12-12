#include<stdio.h>

int inverse(int n);
int main()
{
    int n,  sum;
    scanf("%d", &n);
    sum = n + inverse(n);
    printf("%d", sum);   
    return 0;
}

//请完成如下函数，并提交
int inverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    return reversed;
}